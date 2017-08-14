![Screenshot](https://i.ppn.pw/cc/645ca6c4/jea1430c6.png)

### nSkinz

nSkinz is a fully featured internal skin, knife and glove changer for Counter-Strike: Global Offensive. Although written from scratch, nSkinz was heavily influenced by [chameleon-ng](https://github.com/emskye96/chameleon-ng)

* Use any skin on any weapon, including ones not available normally.
* Add any sticker to your weapons.
* Use any glove model and skin combination
* Special knife animations are supported.
* Knife kill feed icons are automatically replaced.
* In-game configuration with [ImGui](https://github.com/ocornut/imgui)
* Always up-to-date dynamic skins, with localized names
* Uses signature scanning and NetVar manager for dynamic offsets
* JSON based configuration saving & loading support

## Requirements

* C++11 compilant compiler
* Tested under: clang 4.0, MSVC 2017

## Usage

Currently only Windows is supported, however this may change ~~in the future~~ if you submit a PR because I'm lazy.

* Download the source with "Clone or Download" -> "Download ZIP", or via command line:
```
git clone https://github.com/namazso/nSkinz.git
```
* Compile using your preferred compiler
* Inject the resulting library into the game
* Press <kbd>Insert</kbd> to bring up the menu.
* Set a weapon configuration
* To override multiple weapons press the "Add" button. When an inventory update occurs always the first enabled entry applicable for that weapon will be used.
* To save your configuration press the "Save" button. To load it later press the "Load" button

## License

**This project is licensed under the MIT license**
See the "LICENSE" file for more details.
