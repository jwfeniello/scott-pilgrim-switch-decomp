# GitHub and decomp.dev

The GitHub workflow on default-branch pushes validates current local verification
receipts, generates an objdiff v2 report, checks it with objdiff-cli 3.8.2 and
uploads only `build/report.json` in the `switch_report` artifact.

After the first successful push workflow:

1. Sign into [decomp.dev](https://decomp.dev) using the GitHub account that has
   admin access to the public repository.
2. Open [Add New](https://decomp.dev/manage/new) and select
   `jwfeniello/scott-pilgrim-switch-decomp`.
3. Set the full game name to **Scott Pilgrim vs. The World: The Game – Complete
   Edition**, short name to **Scott Pilgrim**, and platform to **Nintendo Switch**.
4. Save. The site detects the existing progress workflow and imports its report.
5. Optionally install the [decomp.dev GitHub app](https://github.com/apps/decomp-dev)
   for workflow-completion notifications and progress comments on pull requests.

Subsequent default-branch pushes provide new historical reports. The site's
Manage page can request a refresh. It requires at least one completed default-
branch **push** workflow containing a valid report artifact; a local JSON file
or a workflow-dispatch run alone does not satisfy that initial discovery path.

To update progress after changing matching source or configuration, rerun
`tools/verify.py` locally using the correct original ELF and public compilers,
review the new `progress/verified.json`, and commit it with the changed inputs.
The report generator rejects stale snapshots. Editing WIP alone gives no matching
credit. The workflow never uploads the original, objects or compiler binaries.

References:

- [decomp.dev artifact importer](https://github.com/encounter/decomp.dev/blob/main/crates/github/src/lib.rs)
- [decomp.dev project registration](https://github.com/encounter/decomp.dev/blob/main/crates/web/src/handlers/manage.rs)
- [objdiff report schema](https://github.com/encounter/objdiff/blob/main/objdiff-core/protos/report.proto)
