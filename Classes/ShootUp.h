#ifndef __SHOOTUP_H__
#define __SHOOTUP_H__

#include "cocos2d.h"

USING_NS_CC;

/*********************OTHER***********************/
#define WIDTH                           0
#define HEIGHT                          1
#define EMPTY_VALUE                     -1
#define FIRE_UP_FONT                    "fonts/fire_up.ttf"
#define FIRE_UP_FONT_NUMBERS            "fonts/numbers.ttf"
#define TITLE                           "S H O O T  U P !"
#define PARTICLE_ANIM                   "spritesheet/hit.plist"
#define SURCLASSEMENT                   "SURCLASSEMENT"
#define OPTIONS_SOUND_ON                "menu/options/sound_on.png"
#define OPTIONS_SOUND_OFF               "menu/options/sound_off.png"
#define OPTIONS_TUTO                    "menu/options/tuto.png"
#define HIT_CIRCLE                      "anim/explode.png"
#define NORMAL_LAUNCH                   0
#define BONUS_LAUNCH_LEFT               1
#define BONUS_LAUNCH_RIGHT              2
#define DEFAULT_SQUARE_TEXTURE          "green_b.png"
#define BONUS_BULLET                    0
#define BONUS_POWER                     1
#define BONUS_HIDE                      0
#define BONUS_IN_GAME                   1
#define COMPLEX_STRUCT_ELMTS            7
#define NO_SHOOTER_UPGRADE              2
#define SQUARE_SIZE_5                   4.95
#define NOT_FROM_SHOP                   0
#define SQUARE_SIZE_4                   3.95
#define POINTS_TO_ADD_FACTOR            100
#define POWER_LEVEL_BTN_TAG             34
#define SPEED_LEVEL_BTN_TAG             35
#define MAIN_MENU_TAG                   36
#define DEFAULT_CHAR_LENGHT             10
#define BULLET_LEFT                     0
#define BULLET_RIGHT                    1
#define OPTIONS_HIDE                    0
#define OPTIONS_DISPLAYED               1

/******************* ACHIEVEMENT CATEGORIES ***************/
#define STARTER_TANK                    0
#define POWER_TANK                      1
#define MOVEMENT_TANK                   2
#define DOUBLE_TANK                     3
#define SHIELD_TANK                     4
#define SPEED_TANK                      5
#define SIDEWAY_TANK                    6
#define TRIPLE_TANK                     7

/******************* GAME STATES ***************/
#define MENU                            0
#define GAME_RUNNING                    1
#define GAME_END                        2

/******************* GAME PLAY MANAGMENT ***************/
#define LINE_SPEED                      4
#define SIMPLE_LINE_NBR                 10
#define DEFAULT_BULLET_NBR              12 //default bullet nbr shooted in 2sec (middle time between 2 lines, + donne des points plus élevés vice versa)

/******************* LINE TYPE ***************/
#define LINE_TYPE_STARTUP_2             0
#define LINE_TYPE_STARTUP_3             1
#define LINE_TYPE_STARTUP_4             2
#define LINE_TYPE_STARTUP_5             3
#define LINE_TYPE_SIMPLE_OF_4           4
#define LINE_TYPE_SIMPLE_OF_5           5
#define LINE_TYPE_COMPLEX_0             6
#define LINE_TYPE_COMPLEX_1             7
#define LINE_TYPE_COMPLEX_2             8
#define LINE_TYPE_COMPLEX_3             9
#define LINE_TYPE_COMPLEX_4             10
#define LINE_TYPE_COMPLEX_5             11
#define LINE_TYPE_COMPLEX_6             12
#define LINE_TYPE_COMPLEX_7             13

/*******************GAME VARIABLES ***************/
#define ITEM_COLLECTED                  "ITEM_COLLECTED" //achievement
#define POWER_UP_ITEMS                  "POWER_UP_ITEMS"
#define GAME_NBR                        "GAME_NBR"
#define BLOCK_DESTROYED                 "BLOCK_DESTROYED"
#define POWER_LEVEL                     "POWER_LEVEL"
#define SPEED_LEVEL                     "SPEED_LEVEL"
#define POWER_VALUE                     "POWER_VALUE"
#define SPEED_VALUE                     "SPEED_VALUE"
#define POWER_LEVEL_PRICE               "POWER_LEVEL_PRICE"
#define SPEED_LEVEL_PRICE               "SPEED_LEVEL_PRICE"
#define SCORE                           "SCORE"
#define SOUND                           "SOUND"
#define POINT                           "POINT"
#define FROM_SHOP                       "FROM_SHOP"
#define LINE_BATCH_ID                   42
#define SHOOTER_ARRAY                   0
#define BALL_ARRAY                      1
#define SOUND_ON                        0
#define SOUND_OFF                       1
#define SQUARE_SIZE_LINE_OF_4           4
#define SQUARE_SIZE_LINE_OF_5           5

/******************* COLORS ***************/
#define BASIC_COLOR_GREEN               "green_b.png"
#define BASIC_COLOR_RED                 "red_b.png"
#define BASIC_COLOR_YELLOW              "yellow_b.png"
#define BASIC_COLOR_ORANGE              "orange_b.png"

/******************* DEFAULT COLOR CODE ***************/
#define GREEN                           3
#define YELLOW                          2
#define ORANGE                          1
#define RED                             0


/******************* INITIALISATION LINE TYPE  ***************/
#define SIMPLE_LINE_4                   0
#define SIMPLE_LINE_5                   1
#define STARTUP_LINE_2                  3
#define STARTUP_LINE_3                  4
#define STARTUP_LINE_4                  5
#define STARTUP_LINE_5                  6


/*******************MENU MAIN***************/
#define SURCLASSEMENT_UNSELECTED        "menu/surclassement.png"
#define SURCLASSEMENT_SELECTED          "menu/surclassement_selected.png"
#define OPTIONS                         "menu/options.png"
#define STATS                           "menu/stats.png"
#define HAND                            "menu/play_anim_hand.png"
#define HAND_RAIL                       "menu/play_anim.png"
#define BEST_IMG                        "menu/best_score.png"
#define BEST_SCORE_IMG                  "menu/best_img.png"
#define SHOP_UNSELECTED                 "menu/shop.png"
#define SHOP_SELECTED                   "menu/shop_selected.png"

class ShootUp {

public:


private:
};

#endif // __SHOOTUP_H__