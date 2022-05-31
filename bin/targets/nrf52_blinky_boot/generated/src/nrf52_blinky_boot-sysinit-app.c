/**
 * This file was generated by Apache newt version: 1.10.0-dev
 */

#if !SPLIT_LOADER

void os_pkg_init(void);
void flash_map_init(void);
void modlog_init(void);

void
sysinit_app(void)
{
    /*** Stage 0 */
    /* 0.0: os_pkg_init (kernel/os) */
    os_pkg_init();

    /*** Stage 9 */
    /* 9.0: flash_map_init (sys/flash_map) */
    flash_map_init();

    /*** Stage 100 */
    /* 100.0: modlog_init (sys/log/modlog) */
    modlog_init();
}

#endif