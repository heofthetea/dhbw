> Work by directly _modifying_ the JavaScript Code the GNOME desktop is written in.


Required Packages: `gnome-shell-extensions gnome-tweaks` (don't quote me on that tho lol)

## Install
1. Head to the extension's official GitHub repository
2. grab a zip release of the extension
3. download and _don't extract_

### Load gnome extension
```bash
gnome-extensions install -f /path/to/zip
```
and enable via the GUI, or with `gnome-extensions enable <extension>`



## list of working extensions for GNOME 46
### Tiling Assistant
https://github.com/Leleat/Tiling-Assistant/tree/release-46
that's actually the nice part about Arch - since they install basically everything from source anyway, this enables beautiful opportunities for jumping out of stable releases

--> works way better on the EndeavourOS chromebook - idk whether that is because of newer gnome or Wayland🤔

### Gesture Improvements
HOLY FUCKING SHIT it was basically impossible for me to find _any_ touchpad gesture extension for the combination GNOME 46/Wayland - the configuration EndeavourOS uses. Eventually I found something:

https://github.com/jamespo/gnome-gesture-improvements/releases/tag/gnome46 - Dude saved my fucking day xd (source for this: official Gnome Extensions site for the extension)anoano