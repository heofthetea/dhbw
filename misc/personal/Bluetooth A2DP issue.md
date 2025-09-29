[[Bluetooth]]

- A2DP: high-quality codec for audio playback on [[Bluetooth]] headphones

## Check whether device supports A2DP
```
bluetoothctl
# info <mac>
```

- one of two [[UUID]]s must be present:
	- Audio Sink (`0000110b-0000-1000-8000-00805f9b34fb`)
	- or Advanced Audio Distribution (`0000110d-0000-1000-8000-00805f9b34fb`)

## List sound cards
```bash
pactl list cards short
```

- contains something like `bluez_card.<mac> module-bluez5-device.c`

## Force profile
```bash
pactl set-card-profile bluez_card.B0_38_E2_3A_92_7D a2dp-sink
```

## Default configuration
- configure pipewire to prefer A2DP in the future
-  create file (and appropriate directories) `~/.config/wireplumber/bluetooth.lua.d/51-a2dp-prefer.lua`

```lua
bluez_monitor.properties = {
    ["bluez5.auto-connect"] = {"a2dp_sink"}
}
```