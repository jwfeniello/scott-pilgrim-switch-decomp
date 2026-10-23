# SDK calendar helpers

`LocalCalendar` (`0x45fe0`) and `UtcCalendar` (`0x460d0`) each cover a
complete 236-byte function. Names are descriptive; declarations reconstruct
the imported ABI rather than supplying SDK headers.

Both obtain a C-library time value and the SDK standard user system clock.
They convert the SDK timestamp into calendar fields, copying a C-library
`tm` from `localtime` or `gmtime` before replacing its year, month, day, hour,
minute, second, weekday, year-day and daylight-saving flag with SDK values.
The C-library copy preserves the remaining fields, including timezone data.
Year and month are adjusted to the C `tm` representation. Each SDK call's
nonzero result goes to the imported abort routine.

The result is a four-byte aggregate returned by value. Reconstructing it as
a bare integer generated identical conversion instructions but put the
first temporary result in a different stack slot. An aggregate result and
an inline check taking a const reference reproduce both full functions.
Calendar fields are signed 16-bit year and signed 8-bit components; the
additional-info view places weekday/year-day at 0/4 and daylight-saving at 16.
Unknown additional-info bytes are not assigned invented meanings.

Exact verification checks complete bytes and imported-call bindings. This
does not establish the behavior of SDK clock services or a runnable game.
