/**
 * @file lv_ex_conf.h
 *
 */
/*
 * COPY THIS FILE AS lv_ex_conf.h
 */

#if 1 /*Set it to "1" to enable the content*/

#ifndef LV_EX_CONF_H
#define LV_EX_CONF_H


/*******************
 * GENERAL SETTING
 *******************/
#define LV_EX_PRINTF       1       /*Enable printf-ing data*/
#define LV_EX_KEYBOARD     0       /*Add PC keyboard support to some examples (`lv_drvers` repository is required)*/
#define LV_EX_MOUSEWHEEL   0       /*Add 'encoder' (mouse wheel) support to some examples (`lv_drivers` repository is required)*/

/*********************
 * DEMO USAGE
 *********************/

/*Show some widgets in action*/
#if defined CONFIG_LVGL_EXAMPLES_DEMO_WIDGETS
    #define LV_USE_DEMO_WIDGETS 1
#else
    #define LV_USE_DEMO_WIDGETS 0
#endif

/* Widgets demo */
#if defined CONFIG_LVGL_EXAMPLES_DEMO_WIDGETS_SLIDESHOW
    #define LV_DEMO_WIDGETS_SLIDESHOW   1
#else
    #define LV_DEMO_WIDGETS_SLIDESHOW   0
#endif

#endif /*LV_EX_CONF_H*/

#endif /*End of "Content enable"*/

