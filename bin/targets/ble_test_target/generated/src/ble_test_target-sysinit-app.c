/**
 * This file was generated by Apache newt version: 1.10.0
 */

#if !SPLIT_LOADER

void os_pkg_init(void);
void flash_map_init(void);
void stats_module_init(void);
void console_pkg_init(void);
void log_init(void);
void modlog_init(void);
void ble_transport_init(void);
void ble_transport_hs_init(void);
void ble_svc_gap_init(void);
void ble_svc_gatt_init(void);
void ble_svc_ans_init(void);
void ble_store_config_init(void);
void shell_init(void);
void ble_transport_ll_init(void);

void
sysinit_app(void)
{
    /*** Stage 0 */
    /* 0.0: os_pkg_init (kernel/os) */
    os_pkg_init();

    /*** Stage 9 */
    /* 9.0: flash_map_init (sys/flash_map) */
    flash_map_init();

    /*** Stage 10 */
    /* 10.0: stats_module_init (sys/stats/full) */
    stats_module_init();

    /*** Stage 20 */
    /* 20.0: console_pkg_init (sys/console/full) */
    console_pkg_init();

    /*** Stage 100 */
    /* 100.0: log_init (sys/log/full) */
    log_init();
    /* 100.1: modlog_init (sys/log/modlog) */
    modlog_init();

    /*** Stage 250 */
    /* 250.0: ble_transport_init (nimble/transport) */
    ble_transport_init();

    /*** Stage 251 */
    /* 251.0: ble_transport_hs_init (nimble/transport) */
    ble_transport_hs_init();

    /*** Stage 301 */
    /* 301.0: ble_svc_gap_init (nimble/host/services/gap) */
    ble_svc_gap_init();

    /*** Stage 302 */
    /* 302.0: ble_svc_gatt_init (nimble/host/services/gatt) */
    ble_svc_gatt_init();

    /*** Stage 303 */
    /* 303.0: ble_svc_ans_init (nimble/host/services/ans) */
    ble_svc_ans_init();

    /*** Stage 500 */
    /* 500.0: ble_store_config_init (nimble/host/store/config) */
    ble_store_config_init();
    /* 500.1: shell_init (sys/shell) */
    shell_init();

    /* [$after:ble_transport_hs_init]: ble_transport_ll_init (nimble/transport) */
    ble_transport_ll_init();
}

#endif
