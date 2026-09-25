Fonts used by the DuckingSpace interface (added for 1.1).

DuckSans-SemiBold.ttf, DuckSans-Medium.ttf
  Barlow Semi Condensed SemiBold and Medium (version 1.408), latin subset,
  from @fontsource/barlow-semi-condensed 5.3.0.
  Copyright 2017 The Barlow Project Authors. SIL Open Font License 1.1, see OFL-DuckSans.txt.

DuckMono-Medium.ttf, DuckMono-Bold.ttf
  JetBrains Mono Medium and Bold (version 2.242), from the npm package jetbrains-mono 1.0.6.
  Copyright 2020 The JetBrains Mono Project Authors. SIL Open Font License 1.1, see OFL-DuckMono.txt.

Both were converted from WOFF2 to TTF with fontTools and each weight was given its own
family name (DuckSans SemiBold, DuckSans Medium, DuckMono Medium, DuckMono Bold), because
Windows looks up fonts loaded from memory by name and faces sharing one family name can
collapse into one. Neither font declares a Reserved Font Name. The glyphs are unchanged.

Duck.ttf
  Rubber-Duck by PINISIART, the title font, unchanged since 1.0.
