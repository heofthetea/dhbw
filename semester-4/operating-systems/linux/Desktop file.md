> [!definition] Desktop entries are **configuration files** that describe how ann **application** is **launched** and what data it can handle.

## Location
Desktop files _have_ to be located in `/usr/share/applications`, as only there they will be picked up by the Desktop environment.
Usually, they are [[Symlink|symlinked]] to this location.


## Content
A desktop file can contain a whole bunch of stuff, most of which is just a little extra flavour. I'm sure there's some list of parameters somewhere.

There's three important paramters:
1. `Exec`: Path to the executable. If the executable is on [[$PATH]], it makes things a lot easier, because no absolute path needs to be specified.
2. `Name`: Name of the Application.
3. `Icon`: The absolute path to the icon of the application.
### Example Desktop Entry: Discord
```ini
[Desktop Entry]
Name=Discord
StartupWMClass=discord
Comment=All-in-one voice and text chat for gamers that's free, secure, and work>
GenericName=Internet Messenger
Exec=Discord
Icon=/usr/share/icons/discord.png
Type=Application
Categories=Network;InstantMessaging;
```

### Example: VS Code
```ini
[Desktop Entry]
Name=Visual Studio Code
Comment=Code Editing. Redefined.
GenericName=Text Editor
Exec=/usr/share/code/code %F
Icon=vscode
Type=Application
StartupNotify=false
StartupWMClass=Code
Categories=TextEditor;Development;IDE;
MimeType=application/x-code-workspace;
Actions=new-empty-window;
Keywords=vscode;

```