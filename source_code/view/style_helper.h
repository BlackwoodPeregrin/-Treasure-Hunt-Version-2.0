#ifndef STYLE_HELPER_H
#define STYLE_HELPER_H

#include <QString>

namespace TreasureHunt_2_0 {

class StyleHelper {
 public:
  StyleHelper() = default;
  StyleHelper(StyleHelper const &other) = delete;
  StyleHelper(StyleHelper &&other) = delete;
  ~StyleHelper() = default;

  auto operator=(StyleHelper const &other) = delete;
  auto operator=(StyleHelper &&other) = delete;

  static auto getBackgroundWidget() -> QString {
    return "QWidget {"
           "   background-image: url(:/img/background.jpg);"
           "};";
  }

  static auto getBackgroundPlayingField() -> QString {
    return "QWidget {"
           "   background-image: url(:/img/background_playing_field.jpg);"
           "};";
  }

  static auto getStyleLabelAboutGame() -> QString {
    return "QLabel {"
           "   font-size: 15px;"
           "   color: rgb(0, 0, 0);"
           "   background: none;"
           "   background-color: gray;"
           "   border: none;"
           "   border-style: solid;"
           "   border-width: 2px;"
           "   border-radius: 12px;"
           "};";
  }

  static auto getStyleLabelCloseGame() -> QString {
    return "QLabel {"
           "   font-size: 15px;"
           "   color: rgb(0, 0, 0);"
           "   background: none;"
           "   background-color: gray;"
           "   border: none;"
           "   border-style: solid;"
           "   border-width: 2px;"
           "   border-radius: 13px;"
           "};";
  }

  static auto getUndoButtonStyle() -> QString {
    return "QPushButton {"
           "   background: none;"
           "   background-color: gray;"
           "   border: none;"
           "   border-style: solid;"
           "   border-width: 2px;"
           "   border-radius: 15px;"
           "   border-color: black;"
           "}\n"
           "QPushButton:hover {"
           "   border-style: solid;"
           "   border-width: 2px;"
           "   border-color: gray;"
           "};";
  }

  static auto getStartGameAboutGameButtonStyle() -> QString {
    return "QPushButton {"
           "   background: none;"
           "   background-color: rgb(170, 118, 92);"
           "   border: none;"
           "   border-style: solid;"
           "   border-width: 2px;"
           "   border-radius: 15px;"
           "   border-color: gray;"
           "   font-size: 15px;"
           "}\n"
           "QPushButton:hover {"
           "   border-style: solid;"
           "   border-width: 2px;"
           "   border-color: black;"
           "};";
  }

  //
  static auto getButtonFocusStyle() -> QString {
    return "QPushButton {"
           "   background: none;"
           "   background-image: url(:/img/background_chips.jpg);"
           "   border-style: solid;"
           "   border-width: 2px;"
           "   border-color: white;"
           "   border-radius: 5%;"
           "};";
  }

  static auto getButtonUnFocusStyle() -> QString {
    return "QPushButton {"
           "   background: none;"
           "   background-image: url(:/img/background_chips.jpg);"
           "   border-radius: 5%;"
           "};";
  }

  static auto getButtonPressedFocusStyle() -> QString {
    return "QPushButton {"
           "   background: none;"
           "   background-image: url(:/img/background_chips.jpg);"
           "   border-style: solid;"
           "   border-width: 2px;"
           "   border-color: rgb(0, 214, 120);"
           "   border-radius: 5%;"
           "};";
  }

  //

  static auto getButtonStyleUnderGameField() -> QString {
    return "QPushButton {"
           "   background: none;"
           "   border: none;"
           "   border-radius: 5%;"
           "};";
  }

  // ???????????? ???????????? 'start game'
  static auto getPathStartGameButtonIcon() -> QString {
    return ":/img/play.png";
  }

  // ???????????? ???????????? 'repeat'
  static auto getPathRepeatButtonIcon() -> QString {
    return ":/img/repeat.png";
  }
  // ???????????? ???????????? 'about game'
  static auto getPathAboutGameButtonIcon() -> QString {
    return ":/img/info.png";
  }
  // ???????????? ???????????? 'back to menu'
  static auto getPathToUndoIcon() -> QString { return ":/img/undo.png"; }
  // ???????????? ???????????? 'yes'
  static auto getPathToYesIcon() -> QString { return ":/img/yes.png"; }
  // ???????????? ???????????? 'no'
  static auto getPathToNoIcon() -> QString { return ":/img/close.png"; }

  // ???????? ?? ?????????????? ?????????????? ??????????
  static auto getPathToRedStoneIcon() -> QString {
    return ":/img/chips/red_stone.png";
  }
  static auto getPathToBlueStoneIcon() -> QString {
    return ":/img/chips/blue_stone.png";
  }
  static auto getPathToSkyStoneIcon() -> QString {
    return ":/img/chips/sky_stone.png";
  }
  static auto getPathToYellowStoneIcon() -> QString {
    return ":/img/chips/yellow_stone.png";
  }
  static auto getPathToGreenStoneIcon() -> QString {
    return ":/img/chips/green_stone.png";
  }
  static auto getPathToLightGreenStoneIcon() -> QString {
    return ":/img/chips/light_green_stone.png";
  }
  static auto getPathToPerpleStoneIcon() -> QString {
    return ":/img/chips/perple_stone.png";
  }
  static auto getPathToGreyStoneIcon() -> QString {
    return ":/img/chips/gray_stone.png";
  }
  static auto getPathToBlackStoneIcon() -> QString {
    return ":/img/chips/black_stone.png";
  }
  static auto getPathToWhiteStoneIcon() -> QString {
    return ":/img/chips/white_stone.png";
  }

  // ???????? ?? ???????????? ???????????????????? ??????????????
  static auto getPathToBoxIcon() -> QString { return ":/img/box.png"; }

  static auto getMessageVictory() -> QString {
    return "???????????????????????? ????????! ???????????? ?????????? ??\n?????????????? ???????? ??????\n???????????? "
           "?????????????? ?????????????";
  }
  static auto getMessageExitGame() -> QString {
    return "???????????????? ???????? ???????????????? ?? ????????????\n??????????????????."
           " ???? ??????????????????????????\n???????????? ???????????";
  }
};

}  // namespace TreasureHunt_2_0

#endif  // STYLE_HELPER_H
