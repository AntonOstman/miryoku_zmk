
//#define SE_AO RALT(w)
//#define SE_AE RALT(q)
//#define SE_OE RALT(p) 


#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, TAB),  U_LT(U_NAV, SPC), U_LT(U_SYM, RET),  U_LT(U_NUM, ESC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,             \
&kp COLON,         &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp PLUS,          U_NA,              &kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp EQL,            \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp BSLH,               \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp MINUS

#define MIRYOKU_ALTERNATIVES_NAV_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp LC(BSPC),      &kp BSPC,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp ESC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
&kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          &kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          \
&kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp EQL,           &kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp EQL,           \
&kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp BSLH,          &kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp BSLH,          \
U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp MINUS,         U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp MINUS

#define MIRYOKU_ALTERNATIVES_MOUSE_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              &kp LC(BSPC),      &kp BSPC,            U_WH_U,            U_WH_R,            U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
