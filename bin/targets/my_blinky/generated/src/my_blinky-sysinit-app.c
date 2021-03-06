/**
 * This file was generated by Apache newt version: 1.9.0
 */

#if !SPLIT_LOADER

void os_pkg_init(void);
void flash_map_init(void);
void console_pkg_init(void);
void bus_pkg_init(void);
void log_init(void);
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

    /*** Stage 20 */
    /* 20.0: console_pkg_init (sys/console/full) */
    console_pkg_init();

    /*** Stage 100 */
    /* 100.0: bus_pkg_init (hw/bus) */
    bus_pkg_init();
    /* 100.1: log_init (sys/log/full) */
    log_init();
    /* 100.2: modlog_init (sys/log/modlog) */
    modlog_init();
}

#endif
