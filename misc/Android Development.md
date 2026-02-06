
## Connecting a Phone
1. search for "USB debugging" in phone developer settings -> select to true
2. Verify [[RSA]] [[Public Key]] [[Hash|Fingerprint]]

```bash
adb pubkey ~/.android/adbkey | awk '{print $1}' \
| openssl base64 -A -a -d | openssl md5 -c | tr a-z A-Z
```


## Getting overview of devices
```bash
$ adb devices
List of devices attached
26081FDF6008RP	device
```


## Installing
after Connection is setup and building is done3

```bash
adb install $PROJECT_ROOT/android/app/build/outputs/apk/release/app-release.apk
```
 -> confirm on end device!!
### Building -> vibe docced

#### Prerequisites

- Node.js v22+ installed
- Android Studio with SDK installed
- Android device with USB debugging enabled

#### Environment Variables

Set these variables for your system:

```bash
export PROJECT_ROOT="/home/heofthetea/Documents/Development/side-projects/note-learner"
export ANDROID_HOME="~/.local/share/Android"
export ANDROID_SDK_ROOT="~/.local/share/Android"
export PATH=$PATH:$ANDROID_HOME/platform-tools
```

#### Step 1: Create React Native Project

```bash
# Navigate to your project directory
cd $PROJECT_ROOT

# Create Expo React Native project
npx create-expo-app@latest . --template blank-typescript

# Install web dependencies for testing
npx expo install react-dom react-native-web
```

#### Step 3: Generate Native Android Project

```bash
# Generate native Android files from Expo project
cd $PROJECT_ROOT
npx expo prebuild --platform android
```

This creates the `android/` directory with native Android build files.

#### Step 4: Build the APK

```bash
# Navigate to android directory and build release APK
cd $PROJECT_ROOT/android

# Set environment variables and build
export ANDROID_HOME=~/.local/share/Android
export ANDROID_SDK_ROOT=~/.local/share/Android

# Build the release APK
./gradlew assembleRelease
```

#### Step 5: Verify APK Creation

```bash
# Check that APK was created successfully
ls -lh app/build/outputs/apk/release/app-release.apk
```

Expected output: `app-release.apk` file (~54MB)

#### Step 6: Enable USB Debugging on Android Device

###### On your Android phone:

1. **Enable Developer Options:**

   - Go to Settings → About Phone
   - Tap "Build Number" 7 times rapidly
   - You'll see "You are now a developer!" message

2. **Enable USB Debugging:**

   - Go to Settings → System → Developer Options
   - Turn ON "USB Debugging"
   - Turn ON "Install via USB" (if available)

3. **Connect via USB:**
   - Connect phone to computer via USB cable
   - When prompted about RSA fingerprint, tap "Allow"
   - Check "Always allow from this computer" for convenience

#### Step 7: Verify ADB Connection

```bash
# Check if device is detected
~/.local/share/Android/platform-tools/adb devices
```

Expected output should show your device listed.

#### Step 8: Install APK on Device

###### Method 1: Direct ADB Install (Recommended)

```bash
# Install APK directly to connected device
~/.local/share/Android/platform-tools/adb install $PROJECT_ROOT/android/app/build/outputs/apk/release/app-release.apk
```

###### Method 2: Manual File Transfer

1. Copy APK file to your phone's storage
2. On phone: Use file manager to locate APK
3. Tap APK file and follow installation prompts

#### Step 9: Launch the App

1. Find "Musical Interval Trainer" in your app drawer
2. Launch and enjoy learning musical intervals!

### Troubleshooting: Build Errors

- Ensure Android SDK path is correct: `ls ~/.local/share/Android/platforms/`
- Verify you have Android API 34+ installed
- Clean build: `cd $PROJECT_ROOT/android && ./gradlew clean`
