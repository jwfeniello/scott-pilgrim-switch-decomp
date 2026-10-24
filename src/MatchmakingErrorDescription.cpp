// Descriptive reconstruction; external bindings are checked against the
// original.
#include "SdkResultAbi.h"
using SdkResultAbi::Equal;
using SdkResultAbi::Result;
namespace MatchmakingErrors {
Result InvalidArgument();
Result UnknownSession();
Result NotEnoughSlots();
Result NotTheHost();
Result NotTheScout();
Result InvalidSession();
Result UnknownInvitation();
Result NotAMember();
Result AlreadyAMember();
Result NoReservation();
Result UnknownTicket();
Result NoSessionHost();
Result TicketRejected();
Result InvalidPlatform();
Result SessionLocked();
Result NotAllowed();
Result TemporarilyBanned();
Result PrivilegeRequired();
Result TicketMismatch();
Result PlayerNotConnected();
Result Overbooked();
Result TicketQueueFull();
Result ValidationError();
Result CallerPrivilegeRequired();
} // namespace MatchmakingErrors
extern "C" const char *DescribeMatchmakingError(const Result &value) {
  if (Equal(value, MatchmakingErrors::InvalidArgument()))
    return "MatchmakingClient::InvalidArgument - Returned when the client "
           "supplies invalid parameters to an RMC.";
  if (Equal(value, MatchmakingErrors::UnknownSession()))
    return "MatchmakingClient::UnknownSession - Returned when the client "
           "passes an invalid session ID.";
  if (Equal(value, MatchmakingErrors::NotEnoughSlots()))
    return "MatchmakingClient::NotEnoughSlots - Returned when the client "
           "attempts to join a full session.";
  if (Equal(value, MatchmakingErrors::NotTheHost()))
    return "MatchmakingClient::NotTheHost - Returned when the client is denied "
           "a privileged operation.";
  if (Equal(value, MatchmakingErrors::NotTheScout()))
    return "MatchmakingClient::NotTheScout - Returned when the client is "
           "denied a privileged operation.";
  if (Equal(value, MatchmakingErrors::InvalidSession()))
    return "MatchmakingClient::InvalidSession - Figure out if this is every "
           "returned to a client.";
  if (Equal(value, MatchmakingErrors::UnknownInvitation()))
    return "MatchmakingClient::UnknownInvitation - Returned when the client "
           "attempts to accept a stale invitation.";
  if (Equal(value, MatchmakingErrors::NotAMember()))
    return "MatchmakingClient::NotAMember - Returned when the player is not a "
           "confirmed session member.";
  if (Equal(value, MatchmakingErrors::AlreadyAMember()))
    return "MatchmakingClient::AlreadyAMember - Returned when the player is "
           "already a confirmed session member";
  if (Equal(value, MatchmakingErrors::NoReservation()))
    return "MatchmakingClient::NoReservation - Returned when the player does "
           "not have a reservation on a session.";
  if (Equal(value, MatchmakingErrors::UnknownTicket()))
    return "MatchmakingClient::UnknownTicket - Returned when the client passes "
           "an invalid ticket ID.";
  if (Equal(value, MatchmakingErrors::NoSessionHost()))
    return "MatchmakingClient::NoSessionHost - Returned when the session has "
           "no host.";
  if (Equal(value, MatchmakingErrors::TicketRejected()))
    return "MatchmakingClient::TicketRejected - Returned when the ticket is "
           "rejected.";
  if (Equal(value, MatchmakingErrors::InvalidPlatform()))
    return "MatchmakingClient::InvalidPlatform - Returned when the operation "
           "cannot be used on the current platform.";
  if (Equal(value, MatchmakingErrors::SessionLocked()))
    return "MatchmakingClient::SessionLocked - Returned when the operation is "
           "denied.";
  if (Equal(value, MatchmakingErrors::NotAllowed()))
    return "MatchmakingClient::NotAllowed - Returned when the operation is "
           "denied";
  if (Equal(value, MatchmakingErrors::TemporarilyBanned()))
    return "MatchmakingClient::TemporarilyBanned - Returned when the player is "
           "temporarily banned.";
  if (Equal(value, MatchmakingErrors::PrivilegeRequired()))
    return "MatchmakingClient::PrivilegeRequired - Returned when the player is "
           "likely a pirate.";
  if (Equal(value, MatchmakingErrors::TicketMismatch()))
    return "MatchmakingClient::TicketMismatch - Returned when "
           "confirming/declining a reservation with the wrong ticket ID.";
  if (Equal(value, MatchmakingErrors::PlayerNotConnected()))
    return "MatchmakingClient::PlayerNotConnected - Returned when creating a "
           "ticket containing players that aren't connected.";
  if (Equal(value, MatchmakingErrors::Overbooked()))
    return "MatchmakingClient::Overbooked - Returned when attempting to "
           "confirm a slot on a session that's been overbooked.";
  if (Equal(value, MatchmakingErrors::TicketQueueFull()))
    return "MatchmakingClient::TicketQueueFull - Returned when creating a "
           "ticket when there are too many tickets in the queue.";
  if (Equal(value, MatchmakingErrors::ValidationError()))
    return "MatchmakingClient::ValidationError - Returned when a player "
           "doesn't have the necessary privileges to make a call.";
  if (Equal(value, MatchmakingErrors::CallerPrivilegeRequired()))
    return "MatchmakingClient::CallerPrivilegeRequired - Returned when a "
           "player doesn't have the necessary privileges to make a call.";
  return nullptr;
}
