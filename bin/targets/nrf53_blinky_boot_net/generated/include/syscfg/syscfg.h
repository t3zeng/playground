/**
 * This file was generated by Apache newt version: 1.10.0-dev
 */

#ifndef H_MYNEWT_SYSCFG_
#define H_MYNEWT_SYSCFG_

/**
 * This macro exists to ensure code includes this header when needed.  If code
 * checks the existence of a setting directly via ifdef without including this
 * header, the setting macro will silently evaluate to 0.  In contrast, an
 * attempt to use these macros without including this header will result in a
 * compiler error.
 */
#define MYNEWT_VAL(_name)                       MYNEWT_VAL_ ## _name
#define MYNEWT_VAL_CHOICE(_name, _val)          MYNEWT_VAL_ ## _name ## __ ## _val


/*** Repository @apache-mynewt-core info */
#ifndef MYNEWT_VAL_REPO_HASH_APACHE_MYNEWT_CORE
#define MYNEWT_VAL_REPO_HASH_APACHE_MYNEWT_CORE "ce4e75ac994248f745d86c443c6eaed89a47de91-dirty"
#endif

#ifndef MYNEWT_VAL_REPO_VERSION_APACHE_MYNEWT_CORE
#define MYNEWT_VAL_REPO_VERSION_APACHE_MYNEWT_CORE "0.0.1"
#endif

/*** Repository @apache-mynewt-mcumgr info */
#ifndef MYNEWT_VAL_REPO_HASH_APACHE_MYNEWT_MCUMGR
#define MYNEWT_VAL_REPO_HASH_APACHE_MYNEWT_MCUMGR "215eb188c20323a6b0489be2ddc08e0f3171c7d8"
#endif

#ifndef MYNEWT_VAL_REPO_VERSION_APACHE_MYNEWT_MCUMGR
#define MYNEWT_VAL_REPO_VERSION_APACHE_MYNEWT_MCUMGR "0.0.0"
#endif

/*** Repository @apache-mynewt-nimble info */
#ifndef MYNEWT_VAL_REPO_HASH_APACHE_MYNEWT_NIMBLE
#define MYNEWT_VAL_REPO_HASH_APACHE_MYNEWT_NIMBLE "640ec68013b85109b2ab3c82874c867fc35e41d9"
#endif

#ifndef MYNEWT_VAL_REPO_VERSION_APACHE_MYNEWT_NIMBLE
#define MYNEWT_VAL_REPO_VERSION_APACHE_MYNEWT_NIMBLE "0.0.0"
#endif

/*** Repository @mcuboot info */
#ifndef MYNEWT_VAL_REPO_HASH_MCUBOOT
#define MYNEWT_VAL_REPO_HASH_MCUBOOT "137d79717764ed32d5da4b4b301f32f81b2bf40f"
#endif

#ifndef MYNEWT_VAL_REPO_VERSION_MCUBOOT
#define MYNEWT_VAL_REPO_VERSION_MCUBOOT "0.0.0"
#endif

/*** Repository @my_project info */
#ifndef MYNEWT_VAL_REPO_HASH_MY_PROJECT
#define MYNEWT_VAL_REPO_HASH_MY_PROJECT "e73ca21f38f318b38d77d7b8f0674cf11880902d-dirty"
#endif

#ifndef MYNEWT_VAL_REPO_VERSION_MY_PROJECT
#define MYNEWT_VAL_REPO_VERSION_MY_PROJECT "0.0.0"
#endif



/*** @apache-mynewt-core/compiler/arm-none-eabi-m33 */
#ifndef MYNEWT_VAL_HARDFLOAT
#define MYNEWT_VAL_HARDFLOAT (1)
#endif

/*** @apache-mynewt-core/crypto/mbedtls */
#ifndef MYNEWT_VAL_MBEDTLS_AES_ALT
#define MYNEWT_VAL_MBEDTLS_AES_ALT (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_AES_C
#define MYNEWT_VAL_MBEDTLS_AES_C (1)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_AES_FEWER_TABLES
#define MYNEWT_VAL_MBEDTLS_AES_FEWER_TABLES (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_AES_ROM_TABLES
#define MYNEWT_VAL_MBEDTLS_AES_ROM_TABLES (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ARC4_C
#define MYNEWT_VAL_MBEDTLS_ARC4_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ARIA_C
#define MYNEWT_VAL_MBEDTLS_ARIA_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_BASE64_C
#define MYNEWT_VAL_MBEDTLS_BASE64_C (1)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_BIGNUM_ALT
#define MYNEWT_VAL_MBEDTLS_BIGNUM_ALT (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_BLOWFISH_C
#define MYNEWT_VAL_MBEDTLS_BLOWFISH_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_CAMELLIA_C
#define MYNEWT_VAL_MBEDTLS_CAMELLIA_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_CCM_C
#define MYNEWT_VAL_MBEDTLS_CCM_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_CHACHA20_C
#define MYNEWT_VAL_MBEDTLS_CHACHA20_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_CHACHAPOLY_C
#define MYNEWT_VAL_MBEDTLS_CHACHAPOLY_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_CIPHER_MODE_CBC
#define MYNEWT_VAL_MBEDTLS_CIPHER_MODE_CBC (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_CIPHER_MODE_CFB
#define MYNEWT_VAL_MBEDTLS_CIPHER_MODE_CFB (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_CIPHER_MODE_CTR
#define MYNEWT_VAL_MBEDTLS_CIPHER_MODE_CTR (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_CIPHER_MODE_OFB
#define MYNEWT_VAL_MBEDTLS_CIPHER_MODE_OFB (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_CIPHER_MODE_XTS
#define MYNEWT_VAL_MBEDTLS_CIPHER_MODE_XTS (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_CMAC_C
#define MYNEWT_VAL_MBEDTLS_CMAC_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_CTR_DRBG_C
#define MYNEWT_VAL_MBEDTLS_CTR_DRBG_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_DES_C
#define MYNEWT_VAL_MBEDTLS_DES_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECDH_COMPUTE_SHARED_ALT
#define MYNEWT_VAL_MBEDTLS_ECDH_COMPUTE_SHARED_ALT (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECDH_GEN_PUBLIC_ALT
#define MYNEWT_VAL_MBEDTLS_ECDH_GEN_PUBLIC_ALT (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECDSA_GENKEY_ALT
#define MYNEWT_VAL_MBEDTLS_ECDSA_GENKEY_ALT (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECDSA_SIGN_ALT
#define MYNEWT_VAL_MBEDTLS_ECDSA_SIGN_ALT (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECDSA_VERIFY_ALT
#define MYNEWT_VAL_MBEDTLS_ECDSA_VERIFY_ALT (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECJPAKE_C
#define MYNEWT_VAL_MBEDTLS_ECJPAKE_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_ALT
#define MYNEWT_VAL_MBEDTLS_ECP_ALT (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_DP_BP256R1
#define MYNEWT_VAL_MBEDTLS_ECP_DP_BP256R1 (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_DP_BP384R1
#define MYNEWT_VAL_MBEDTLS_ECP_DP_BP384R1 (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_DP_BP512R1
#define MYNEWT_VAL_MBEDTLS_ECP_DP_BP512R1 (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_DP_CURVE25519
#define MYNEWT_VAL_MBEDTLS_ECP_DP_CURVE25519 (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_DP_CURVE448
#define MYNEWT_VAL_MBEDTLS_ECP_DP_CURVE448 (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_DP_SECP192K1
#define MYNEWT_VAL_MBEDTLS_ECP_DP_SECP192K1 (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_DP_SECP192R1
#define MYNEWT_VAL_MBEDTLS_ECP_DP_SECP192R1 (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_DP_SECP224K1
#define MYNEWT_VAL_MBEDTLS_ECP_DP_SECP224K1 (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_DP_SECP224R1
#define MYNEWT_VAL_MBEDTLS_ECP_DP_SECP224R1 (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_DP_SECP256K1
#define MYNEWT_VAL_MBEDTLS_ECP_DP_SECP256K1 (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_DP_SECP256R1
#define MYNEWT_VAL_MBEDTLS_ECP_DP_SECP256R1 (1)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_DP_SECP384R1
#define MYNEWT_VAL_MBEDTLS_ECP_DP_SECP384R1 (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_DP_SECP521R1
#define MYNEWT_VAL_MBEDTLS_ECP_DP_SECP521R1 (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ECP_RESTARTABLE
#define MYNEWT_VAL_MBEDTLS_ECP_RESTARTABLE (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ENTROPY_C
#define MYNEWT_VAL_MBEDTLS_ENTROPY_C (1)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_ENTROPY_HARDWARE_ALT
#define MYNEWT_VAL_MBEDTLS_ENTROPY_HARDWARE_ALT (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_GENPRIME
#define MYNEWT_VAL_MBEDTLS_GENPRIME (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_HKDF_C
#define MYNEWT_VAL_MBEDTLS_HKDF_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_KEY_EXCHANGE_DHE_RSA_ENABLED
#define MYNEWT_VAL_MBEDTLS_KEY_EXCHANGE_DHE_RSA_ENABLED (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_KEY_EXCHANGE_ECDHE_RSA_ENABLED
#define MYNEWT_VAL_MBEDTLS_KEY_EXCHANGE_ECDHE_RSA_ENABLED (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_KEY_EXCHANGE_RSA_ENABLED
#define MYNEWT_VAL_MBEDTLS_KEY_EXCHANGE_RSA_ENABLED (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_KEY_EXCHANGE_RSA_PSK_ENABLED
#define MYNEWT_VAL_MBEDTLS_KEY_EXCHANGE_RSA_PSK_ENABLED (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_MD2_C
#define MYNEWT_VAL_MBEDTLS_MD2_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_MD4_C
#define MYNEWT_VAL_MBEDTLS_MD4_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_MD5_C
#define MYNEWT_VAL_MBEDTLS_MD5_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_MPI_MAX_SIZE
#define MYNEWT_VAL_MBEDTLS_MPI_MAX_SIZE (1024)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_NIST_KW_C
#define MYNEWT_VAL_MBEDTLS_NIST_KW_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_PKCS1_V15
#define MYNEWT_VAL_MBEDTLS_PKCS1_V15 (1)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_PKCS1_V21
#define MYNEWT_VAL_MBEDTLS_PKCS1_V21 (1)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_POLY1305_C
#define MYNEWT_VAL_MBEDTLS_POLY1305_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_RIPEMD160_C
#define MYNEWT_VAL_MBEDTLS_RIPEMD160_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_SHA1_C
#define MYNEWT_VAL_MBEDTLS_SHA1_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_SHA256_ALT
#define MYNEWT_VAL_MBEDTLS_SHA256_ALT (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_SHA256_C
#define MYNEWT_VAL_MBEDTLS_SHA256_C (1)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_SHA512_C
#define MYNEWT_VAL_MBEDTLS_SHA512_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_SSL_TLS_C
#define MYNEWT_VAL_MBEDTLS_SSL_TLS_C (0)
#endif

#ifndef MYNEWT_VAL_MBEDTLS_TIMING_C
#define MYNEWT_VAL_MBEDTLS_TIMING_C (0)
#endif

/*** @apache-mynewt-core/hw/bsp/nordic_pca10095 */
#ifndef MYNEWT_VAL_BSP_NRF5340
#define MYNEWT_VAL_BSP_NRF5340 (1)
#endif

#ifndef MYNEWT_VAL_BSP_NRF5340_NET_ENABLE
#define MYNEWT_VAL_BSP_NRF5340_NET_ENABLE (1)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/bsp/nordic_pca10095) */
#ifndef MYNEWT_VAL_BSP_NRF5340_NET_FLASH_ENABLE
#define MYNEWT_VAL_BSP_NRF5340_NET_FLASH_ENABLE (1)
#endif

#ifndef MYNEWT_VAL_COREDUMP_SKIP_UNUSED_HEAP
#define MYNEWT_VAL_COREDUMP_SKIP_UNUSED_HEAP (0)
#endif

#ifndef MYNEWT_VAL_SOFT_PWM
#define MYNEWT_VAL_SOFT_PWM (0)
#endif

/*** @apache-mynewt-core/hw/drivers/flash/ipc_nrf5340_flash */
#ifndef MYNEWT_VAL_IPC_NRF5340_FLASH_CLIENT
#define MYNEWT_VAL_IPC_NRF5340_FLASH_CLIENT (0)
#endif

#ifndef MYNEWT_VAL_IPC_NRF5340_FLASH_CLIENT_IN_CHANNEL
#define MYNEWT_VAL_IPC_NRF5340_FLASH_CLIENT_IN_CHANNEL (3)
#endif

#ifndef MYNEWT_VAL_IPC_NRF5340_FLASH_CLIENT_OUT_CHANNEL
#define MYNEWT_VAL_IPC_NRF5340_FLASH_CLIENT_OUT_CHANNEL (2)
#endif

#ifndef MYNEWT_VAL_IPC_NRF5340_FLASH_CLIENT_TIMEOUT
#define MYNEWT_VAL_IPC_NRF5340_FLASH_CLIENT_TIMEOUT (10000)
#endif

#ifndef MYNEWT_VAL_IPC_NRF5340_FLASH_SERVER
#define MYNEWT_VAL_IPC_NRF5340_FLASH_SERVER (0)
#endif

#ifndef MYNEWT_VAL_IPC_NRF5340_FLASH_SERVER_INIT_STAGE
#define MYNEWT_VAL_IPC_NRF5340_FLASH_SERVER_INIT_STAGE (12)
#endif

#ifndef MYNEWT_VAL_IPC_NRF5340_FLASH_SERVER_IN_CHANNEL
#define MYNEWT_VAL_IPC_NRF5340_FLASH_SERVER_IN_CHANNEL (2)
#endif

#ifndef MYNEWT_VAL_IPC_NRF5340_FLASH_SERVER_OUT_CHANNEL
#define MYNEWT_VAL_IPC_NRF5340_FLASH_SERVER_OUT_CHANNEL (3)
#endif

/*** @apache-mynewt-core/hw/drivers/ipc_nrf5340 */
#ifndef MYNEWT_VAL_IPC_NRF5340_BLOCKING_WRITE
#define MYNEWT_VAL_IPC_NRF5340_BLOCKING_WRITE (1)
#endif

#ifndef MYNEWT_VAL_IPC_NRF5340_BUF_SZ
#define MYNEWT_VAL_IPC_NRF5340_BUF_SZ (256)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/drivers/ipc_nrf5340) */
#ifndef MYNEWT_VAL_IPC_NRF5340_CHANNELS
#define MYNEWT_VAL_IPC_NRF5340_CHANNELS (4)
#endif

#undef MYNEWT_VAL_IPC_NRF5340_NET_GPIO

#ifndef MYNEWT_VAL_IPC_NRF5340_PRE_TRUSTZONE_NETCORE_BOOT
#define MYNEWT_VAL_IPC_NRF5340_PRE_TRUSTZONE_NETCORE_BOOT (0)
#endif

#ifndef MYNEWT_VAL_IPC_NRF5340_SYSINIT_STAGE
#define MYNEWT_VAL_IPC_NRF5340_SYSINIT_STAGE (10)
#endif

/*** @apache-mynewt-core/hw/hal */
#ifndef MYNEWT_VAL_HAL_ENABLE_SOFTWARE_BREAKPOINTS
#define MYNEWT_VAL_HAL_ENABLE_SOFTWARE_BREAKPOINTS (1)
#endif

#ifndef MYNEWT_VAL_HAL_FLASH_MAX_DEVICE_COUNT
#define MYNEWT_VAL_HAL_FLASH_MAX_DEVICE_COUNT (0)
#endif

#ifndef MYNEWT_VAL_HAL_FLASH_VERIFY_BUF_SZ
#define MYNEWT_VAL_HAL_FLASH_VERIFY_BUF_SZ (16)
#endif

#ifndef MYNEWT_VAL_HAL_FLASH_VERIFY_ERASES
#define MYNEWT_VAL_HAL_FLASH_VERIFY_ERASES (0)
#endif

#ifndef MYNEWT_VAL_HAL_FLASH_VERIFY_WRITES
#define MYNEWT_VAL_HAL_FLASH_VERIFY_WRITES (0)
#endif

#ifndef MYNEWT_VAL_HAL_SBRK
#define MYNEWT_VAL_HAL_SBRK (1)
#endif

#ifndef MYNEWT_VAL_HAL_SYSTEM_RESET_CB
#define MYNEWT_VAL_HAL_SYSTEM_RESET_CB (0)
#endif

/*** @apache-mynewt-core/hw/mcu/nordic/nrf5340 */
#ifndef MYNEWT_VAL_ADC_0
#define MYNEWT_VAL_ADC_0 (0)
#endif

#ifndef MYNEWT_VAL_ADC_0_REFMV_0
#define MYNEWT_VAL_ADC_0_REFMV_0 (0)
#endif

#ifndef MYNEWT_VAL_GPIO_AS_PIN_RESET
#define MYNEWT_VAL_GPIO_AS_PIN_RESET (0)
#endif

#ifndef MYNEWT_VAL_I2C_0
#define MYNEWT_VAL_I2C_0 (0)
#endif

#ifndef MYNEWT_VAL_I2C_0_FREQ_KHZ
#define MYNEWT_VAL_I2C_0_FREQ_KHZ (100)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_I2C_0_PIN_SCL
#define MYNEWT_VAL_I2C_0_PIN_SCL (ARDUINO_PIN_A5)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_I2C_0_PIN_SDA
#define MYNEWT_VAL_I2C_0_PIN_SDA (ARDUINO_PIN_A4)
#endif

#ifndef MYNEWT_VAL_I2C_1
#define MYNEWT_VAL_I2C_1 (0)
#endif

#ifndef MYNEWT_VAL_I2C_1_FREQ_KHZ
#define MYNEWT_VAL_I2C_1_FREQ_KHZ (100)
#endif

#undef MYNEWT_VAL_I2C_1_PIN_SCL

#undef MYNEWT_VAL_I2C_1_PIN_SDA

#ifndef MYNEWT_VAL_I2C_2
#define MYNEWT_VAL_I2C_2 (0)
#endif

#ifndef MYNEWT_VAL_I2C_2_FREQ_KHZ
#define MYNEWT_VAL_I2C_2_FREQ_KHZ (100)
#endif

#undef MYNEWT_VAL_I2C_2_PIN_SCL

#undef MYNEWT_VAL_I2C_2_PIN_SDA

#ifndef MYNEWT_VAL_I2C_3
#define MYNEWT_VAL_I2C_3 (0)
#endif

#ifndef MYNEWT_VAL_I2C_3_FREQ_KHZ
#define MYNEWT_VAL_I2C_3_FREQ_KHZ (100)
#endif

#undef MYNEWT_VAL_I2C_3_PIN_SCL

#undef MYNEWT_VAL_I2C_3_PIN_SDA

#ifndef MYNEWT_VAL_MCU_APP_CORE
#define MYNEWT_VAL_MCU_APP_CORE (1)
#endif

#ifndef MYNEWT_VAL_MCU_APP_SECURE
#define MYNEWT_VAL_MCU_APP_SECURE (1)
#endif

#ifndef MYNEWT_VAL_MCU_CACHE_ENABLED
#define MYNEWT_VAL_MCU_CACHE_ENABLED (0)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_MCU_DCDC_ENABLED
#define MYNEWT_VAL_MCU_DCDC_ENABLED (1)
#endif

#ifndef MYNEWT_VAL_MCU_DEBUG_IGNORE_BKPT
#define MYNEWT_VAL_MCU_DEBUG_IGNORE_BKPT (0)
#endif

#ifndef MYNEWT_VAL_MCU_FLASH_MIN_WRITE_SIZE
#define MYNEWT_VAL_MCU_FLASH_MIN_WRITE_SIZE (1)
#endif

#undef MYNEWT_VAL_MCU_GPIO_NET

#undef MYNEWT_VAL_MCU_GPIO_PERIPH

#ifndef MYNEWT_VAL_MCU_GPIO_USE_PORT_EVENT
#define MYNEWT_VAL_MCU_GPIO_USE_PORT_EVENT (0)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_MCU_HFCLCK192_DIV
#define MYNEWT_VAL_MCU_HFCLCK192_DIV (1)
#endif

#ifndef MYNEWT_VAL_MCU_HFCLK_DIV
#define MYNEWT_VAL_MCU_HFCLK_DIV (2)
#endif

#ifndef MYNEWT_VAL_MCU_LFCLK_SOURCE__LFRC
#define MYNEWT_VAL_MCU_LFCLK_SOURCE__LFRC (0)
#endif
#ifndef MYNEWT_VAL_MCU_LFCLK_SOURCE__LFSYNTH
#define MYNEWT_VAL_MCU_LFCLK_SOURCE__LFSYNTH (0)
#endif
#ifndef MYNEWT_VAL_MCU_LFCLK_SOURCE__LFXO
#define MYNEWT_VAL_MCU_LFCLK_SOURCE__LFXO (0)
#endif
#undef MYNEWT_VAL_MCU_LFCLK_SOURCE

#ifndef MYNEWT_VAL_MCU_LFCLK_XO_INTCAP__c6pf
#define MYNEWT_VAL_MCU_LFCLK_XO_INTCAP__c6pf (0)
#endif
#ifndef MYNEWT_VAL_MCU_LFCLK_XO_INTCAP__c7pf
#define MYNEWT_VAL_MCU_LFCLK_XO_INTCAP__c7pf (0)
#endif
#ifndef MYNEWT_VAL_MCU_LFCLK_XO_INTCAP__c9pf
#define MYNEWT_VAL_MCU_LFCLK_XO_INTCAP__c9pf (0)
#endif
#ifndef MYNEWT_VAL_MCU_LFCLK_XO_INTCAP__external
#define MYNEWT_VAL_MCU_LFCLK_XO_INTCAP__external (1)
#endif
#ifndef MYNEWT_VAL_MCU_LFCLK_XO_INTCAP
#define MYNEWT_VAL_MCU_LFCLK_XO_INTCAP (1)
#endif

#ifndef MYNEWT_VAL_MCU_NRF5340_EN_APPROTECT_USERHANDLING
#define MYNEWT_VAL_MCU_NRF5340_EN_APPROTECT_USERHANDLING (0)
#endif

#ifndef MYNEWT_VAL_MCU_TARGET__nRF5340_APP
#define MYNEWT_VAL_MCU_TARGET__nRF5340_APP (1)
#endif
#ifndef MYNEWT_VAL_MCU_TARGET
#define MYNEWT_VAL_MCU_TARGET (1)
#endif

#ifndef MYNEWT_VAL_NFC_PINS_AS_GPIO
#define MYNEWT_VAL_NFC_PINS_AS_GPIO (1)
#endif

#ifndef MYNEWT_VAL_NRF5340_EMBED_NET_CORE
#define MYNEWT_VAL_NRF5340_EMBED_NET_CORE (0)
#endif

#ifndef MYNEWT_VAL_PWM_0
#define MYNEWT_VAL_PWM_0 (0)
#endif

#ifndef MYNEWT_VAL_PWM_1
#define MYNEWT_VAL_PWM_1 (0)
#endif

#ifndef MYNEWT_VAL_PWM_2
#define MYNEWT_VAL_PWM_2 (0)
#endif

#ifndef MYNEWT_VAL_PWM_3
#define MYNEWT_VAL_PWM_3 (0)
#endif

#ifndef MYNEWT_VAL_QSPI_ADDRMODE
#define MYNEWT_VAL_QSPI_ADDRMODE (0)
#endif

#ifndef MYNEWT_VAL_QSPI_DPMCONFIG
#define MYNEWT_VAL_QSPI_DPMCONFIG (0)
#endif

#ifndef MYNEWT_VAL_QSPI_ENABLE
#define MYNEWT_VAL_QSPI_ENABLE (0)
#endif

#ifndef MYNEWT_VAL_QSPI_FLASH_PAGE_SIZE
#define MYNEWT_VAL_QSPI_FLASH_PAGE_SIZE (256)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_QSPI_FLASH_SECTOR_COUNT
#define MYNEWT_VAL_QSPI_FLASH_SECTOR_COUNT (2048)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_QSPI_FLASH_SECTOR_SIZE
#define MYNEWT_VAL_QSPI_FLASH_SECTOR_SIZE (4096)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_QSPI_PIN_CS
#define MYNEWT_VAL_QSPI_PIN_CS (18)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_QSPI_PIN_DIO0
#define MYNEWT_VAL_QSPI_PIN_DIO0 (13)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_QSPI_PIN_DIO1
#define MYNEWT_VAL_QSPI_PIN_DIO1 (14)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_QSPI_PIN_DIO2
#define MYNEWT_VAL_QSPI_PIN_DIO2 (15)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_QSPI_PIN_DIO3
#define MYNEWT_VAL_QSPI_PIN_DIO3 (16)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_QSPI_PIN_SCK
#define MYNEWT_VAL_QSPI_PIN_SCK (17)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_QSPI_READOC
#define MYNEWT_VAL_QSPI_READOC (4)
#endif

#ifndef MYNEWT_VAL_QSPI_SCK_DELAY
#define MYNEWT_VAL_QSPI_SCK_DELAY (0)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_QSPI_SCK_FREQ
#define MYNEWT_VAL_QSPI_SCK_FREQ (2)
#endif

#ifndef MYNEWT_VAL_QSPI_SPI_MODE
#define MYNEWT_VAL_QSPI_SPI_MODE (0)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_QSPI_WRITEOC
#define MYNEWT_VAL_QSPI_WRITEOC (3)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_QSPI_XIP_OFFSET
#define MYNEWT_VAL_QSPI_XIP_OFFSET (0x10000000)
#endif

#ifndef MYNEWT_VAL_SPI_0_MASTER
#define MYNEWT_VAL_SPI_0_MASTER (0)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_SPI_0_MASTER_PIN_MISO
#define MYNEWT_VAL_SPI_0_MASTER_PIN_MISO (47)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_SPI_0_MASTER_PIN_MOSI
#define MYNEWT_VAL_SPI_0_MASTER_PIN_MOSI (46)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_SPI_0_MASTER_PIN_SCK
#define MYNEWT_VAL_SPI_0_MASTER_PIN_SCK (45)
#endif

#ifndef MYNEWT_VAL_SPI_0_SLAVE
#define MYNEWT_VAL_SPI_0_SLAVE (0)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_SPI_0_SLAVE_PIN_MISO
#define MYNEWT_VAL_SPI_0_SLAVE_PIN_MISO (47)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_SPI_0_SLAVE_PIN_MOSI
#define MYNEWT_VAL_SPI_0_SLAVE_PIN_MOSI (46)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_SPI_0_SLAVE_PIN_SCK
#define MYNEWT_VAL_SPI_0_SLAVE_PIN_SCK (45)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_SPI_0_SLAVE_PIN_SS
#define MYNEWT_VAL_SPI_0_SLAVE_PIN_SS (44)
#endif

#ifndef MYNEWT_VAL_SPI_1_MASTER
#define MYNEWT_VAL_SPI_1_MASTER (0)
#endif

#undef MYNEWT_VAL_SPI_1_MASTER_PIN_MISO

#undef MYNEWT_VAL_SPI_1_MASTER_PIN_MOSI

#undef MYNEWT_VAL_SPI_1_MASTER_PIN_SCK

#ifndef MYNEWT_VAL_SPI_1_SLAVE
#define MYNEWT_VAL_SPI_1_SLAVE (0)
#endif

#undef MYNEWT_VAL_SPI_1_SLAVE_PIN_MISO

#undef MYNEWT_VAL_SPI_1_SLAVE_PIN_MOSI

#undef MYNEWT_VAL_SPI_1_SLAVE_PIN_SCK

#undef MYNEWT_VAL_SPI_1_SLAVE_PIN_SS

#ifndef MYNEWT_VAL_SPI_2_MASTER
#define MYNEWT_VAL_SPI_2_MASTER (0)
#endif

#undef MYNEWT_VAL_SPI_2_MASTER_PIN_MISO

#undef MYNEWT_VAL_SPI_2_MASTER_PIN_MOSI

#undef MYNEWT_VAL_SPI_2_MASTER_PIN_SCK

#ifndef MYNEWT_VAL_SPI_2_SLAVE
#define MYNEWT_VAL_SPI_2_SLAVE (0)
#endif

#undef MYNEWT_VAL_SPI_2_SLAVE_PIN_MISO

#undef MYNEWT_VAL_SPI_2_SLAVE_PIN_MOSI

#undef MYNEWT_VAL_SPI_2_SLAVE_PIN_SCK

#undef MYNEWT_VAL_SPI_2_SLAVE_PIN_SS

#ifndef MYNEWT_VAL_SPI_3_MASTER
#define MYNEWT_VAL_SPI_3_MASTER (0)
#endif

#undef MYNEWT_VAL_SPI_3_MASTER_PIN_MISO

#undef MYNEWT_VAL_SPI_3_MASTER_PIN_MOSI

#undef MYNEWT_VAL_SPI_3_MASTER_PIN_SCK

#ifndef MYNEWT_VAL_SPI_3_SLAVE
#define MYNEWT_VAL_SPI_3_SLAVE (0)
#endif

#undef MYNEWT_VAL_SPI_3_SLAVE_PIN_MISO

#undef MYNEWT_VAL_SPI_3_SLAVE_PIN_MOSI

#undef MYNEWT_VAL_SPI_3_SLAVE_PIN_SCK

#undef MYNEWT_VAL_SPI_3_SLAVE_PIN_SS

#ifndef MYNEWT_VAL_SPI_4_MASTER
#define MYNEWT_VAL_SPI_4_MASTER (0)
#endif

#undef MYNEWT_VAL_SPI_4_MASTER_PIN_MISO

#undef MYNEWT_VAL_SPI_4_MASTER_PIN_MOSI

#undef MYNEWT_VAL_SPI_4_MASTER_PIN_SCK

#ifndef MYNEWT_VAL_TIMER_0
#define MYNEWT_VAL_TIMER_0 (1)
#endif

#ifndef MYNEWT_VAL_TIMER_1
#define MYNEWT_VAL_TIMER_1 (0)
#endif

#ifndef MYNEWT_VAL_TIMER_2
#define MYNEWT_VAL_TIMER_2 (0)
#endif

#ifndef MYNEWT_VAL_TIMER_3
#define MYNEWT_VAL_TIMER_3 (0)
#endif

#ifndef MYNEWT_VAL_TIMER_4
#define MYNEWT_VAL_TIMER_4 (0)
#endif

#ifndef MYNEWT_VAL_UART_0
#define MYNEWT_VAL_UART_0 (1)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_UART_0_PIN_CTS
#define MYNEWT_VAL_UART_0_PIN_CTS (21)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_UART_0_PIN_RTS
#define MYNEWT_VAL_UART_0_PIN_RTS (19)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_UART_0_PIN_RX
#define MYNEWT_VAL_UART_0_PIN_RX (22)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/hw/mcu/nordic/nrf5340) */
#ifndef MYNEWT_VAL_UART_0_PIN_TX
#define MYNEWT_VAL_UART_0_PIN_TX (20)
#endif

#ifndef MYNEWT_VAL_UART_1
#define MYNEWT_VAL_UART_1 (0)
#endif

#ifndef MYNEWT_VAL_UART_1_PIN_CTS
#define MYNEWT_VAL_UART_1_PIN_CTS (-1)
#endif

#ifndef MYNEWT_VAL_UART_1_PIN_RTS
#define MYNEWT_VAL_UART_1_PIN_RTS (-1)
#endif

#undef MYNEWT_VAL_UART_1_PIN_RX

#undef MYNEWT_VAL_UART_1_PIN_TX

#ifndef MYNEWT_VAL_UART_2
#define MYNEWT_VAL_UART_2 (0)
#endif

#ifndef MYNEWT_VAL_UART_2_PIN_CTS
#define MYNEWT_VAL_UART_2_PIN_CTS (-1)
#endif

#ifndef MYNEWT_VAL_UART_2_PIN_RTS
#define MYNEWT_VAL_UART_2_PIN_RTS (-1)
#endif

#undef MYNEWT_VAL_UART_2_PIN_RX

#undef MYNEWT_VAL_UART_2_PIN_TX

#ifndef MYNEWT_VAL_UART_3
#define MYNEWT_VAL_UART_3 (0)
#endif

#ifndef MYNEWT_VAL_UART_3_PIN_CTS
#define MYNEWT_VAL_UART_3_PIN_CTS (-1)
#endif

#ifndef MYNEWT_VAL_UART_3_PIN_RTS
#define MYNEWT_VAL_UART_3_PIN_RTS (-1)
#endif

#undef MYNEWT_VAL_UART_3_PIN_RX

#undef MYNEWT_VAL_UART_3_PIN_TX

/*** @apache-mynewt-core/kernel/os */
#ifndef MYNEWT_VAL_FLOAT_USER
#define MYNEWT_VAL_FLOAT_USER (0)
#endif

/* Overridden by @mcuboot/boot/mynewt (defined by @apache-mynewt-core/kernel/os) */
#ifndef MYNEWT_VAL_MSYS_1_BLOCK_COUNT
#define MYNEWT_VAL_MSYS_1_BLOCK_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_1_BLOCK_SIZE
#define MYNEWT_VAL_MSYS_1_BLOCK_SIZE (292)
#endif

#ifndef MYNEWT_VAL_MSYS_1_SANITY_MIN_COUNT
#define MYNEWT_VAL_MSYS_1_SANITY_MIN_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_2_BLOCK_COUNT
#define MYNEWT_VAL_MSYS_2_BLOCK_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_2_BLOCK_SIZE
#define MYNEWT_VAL_MSYS_2_BLOCK_SIZE (0)
#endif

#ifndef MYNEWT_VAL_MSYS_2_SANITY_MIN_COUNT
#define MYNEWT_VAL_MSYS_2_SANITY_MIN_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_SANITY_TIMEOUT
#define MYNEWT_VAL_MSYS_SANITY_TIMEOUT (60000)
#endif

#ifndef MYNEWT_VAL_OS_ASSERT_CB
#define MYNEWT_VAL_OS_ASSERT_CB (0)
#endif

#ifndef MYNEWT_VAL_OS_CLI
#define MYNEWT_VAL_OS_CLI (0)
#endif

#ifndef MYNEWT_VAL_OS_COREDUMP
#define MYNEWT_VAL_OS_COREDUMP (0)
#endif

#ifndef MYNEWT_VAL_OS_COREDUMP_CB
#define MYNEWT_VAL_OS_COREDUMP_CB (0)
#endif

#ifndef MYNEWT_VAL_OS_CPUTIME_FREQ
#define MYNEWT_VAL_OS_CPUTIME_FREQ (1000000)
#endif

#ifndef MYNEWT_VAL_OS_CPUTIME_TIMER_NUM
#define MYNEWT_VAL_OS_CPUTIME_TIMER_NUM (0)
#endif

#ifndef MYNEWT_VAL_OS_CRASH_FILE_LINE
#define MYNEWT_VAL_OS_CRASH_FILE_LINE (0)
#endif

#ifndef MYNEWT_VAL_OS_CRASH_LOG
#define MYNEWT_VAL_OS_CRASH_LOG (0)
#endif

#ifndef MYNEWT_VAL_OS_CRASH_RESTORE_REGS
#define MYNEWT_VAL_OS_CRASH_RESTORE_REGS (0)
#endif

#ifndef MYNEWT_VAL_OS_CRASH_STACKTRACE
#define MYNEWT_VAL_OS_CRASH_STACKTRACE (0)
#endif

#ifndef MYNEWT_VAL_OS_CTX_SW_STACK_CHECK
#define MYNEWT_VAL_OS_CTX_SW_STACK_CHECK (0)
#endif

#ifndef MYNEWT_VAL_OS_CTX_SW_STACK_GUARD
#define MYNEWT_VAL_OS_CTX_SW_STACK_GUARD (4)
#endif

#ifndef MYNEWT_VAL_OS_DEBUG_MODE
#define MYNEWT_VAL_OS_DEBUG_MODE (0)
#endif

#ifndef MYNEWT_VAL_OS_EVENTQ_DEBUG
#define MYNEWT_VAL_OS_EVENTQ_DEBUG (0)
#endif

#ifndef MYNEWT_VAL_OS_EVENTQ_MONITOR
#define MYNEWT_VAL_OS_EVENTQ_MONITOR (0)
#endif

#ifndef MYNEWT_VAL_OS_IDLE_TICKLESS_MS_MAX
#define MYNEWT_VAL_OS_IDLE_TICKLESS_MS_MAX (600000)
#endif

#ifndef MYNEWT_VAL_OS_IDLE_TICKLESS_MS_MIN
#define MYNEWT_VAL_OS_IDLE_TICKLESS_MS_MIN (100)
#endif

#ifndef MYNEWT_VAL_OS_MAIN_STACK_SIZE
#define MYNEWT_VAL_OS_MAIN_STACK_SIZE (1024)
#endif

#ifndef MYNEWT_VAL_OS_MAIN_TASK_PRIO
#define MYNEWT_VAL_OS_MAIN_TASK_PRIO (127)
#endif

#ifndef MYNEWT_VAL_OS_MAIN_TASK_SANITY_ITVL_MS
#define MYNEWT_VAL_OS_MAIN_TASK_SANITY_ITVL_MS (0)
#endif

#ifndef MYNEWT_VAL_OS_MEMPOOL_CHECK
#define MYNEWT_VAL_OS_MEMPOOL_CHECK (0)
#endif

#ifndef MYNEWT_VAL_OS_MEMPOOL_GUARD
#define MYNEWT_VAL_OS_MEMPOOL_GUARD (0)
#endif

#ifndef MYNEWT_VAL_OS_MEMPOOL_POISON
#define MYNEWT_VAL_OS_MEMPOOL_POISON (0)
#endif

/* Overridden by @mcuboot/boot/mynewt (defined by @apache-mynewt-core/kernel/os) */
#ifndef MYNEWT_VAL_OS_SCHEDULING
#define MYNEWT_VAL_OS_SCHEDULING (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSINIT_STAGE
#define MYNEWT_VAL_OS_SYSINIT_STAGE (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW
#define MYNEWT_VAL_OS_SYSVIEW (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_CALLOUT
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_CALLOUT (1)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_EVENTQ
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_EVENTQ (1)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_MBUF
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_MBUF (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_MEMPOOL
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_MEMPOOL (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_MUTEX
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_MUTEX (1)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_SEM
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_SEM (1)
#endif

#ifndef MYNEWT_VAL_OS_TASK_RUN_TIME_CPUTIME
#define MYNEWT_VAL_OS_TASK_RUN_TIME_CPUTIME (0)
#endif

/* Overridden by @apache-mynewt-core/hw/mcu/nordic/nrf5340 (defined by @apache-mynewt-core/kernel/os) */
#ifndef MYNEWT_VAL_OS_TICKS_PER_SEC
#define MYNEWT_VAL_OS_TICKS_PER_SEC (128)
#endif

#ifndef MYNEWT_VAL_OS_TIME_DEBUG
#define MYNEWT_VAL_OS_TIME_DEBUG (0)
#endif

#ifndef MYNEWT_VAL_OS_WATCHDOG_MONITOR
#define MYNEWT_VAL_OS_WATCHDOG_MONITOR (0)
#endif

#ifndef MYNEWT_VAL_SANITY_INTERVAL
#define MYNEWT_VAL_SANITY_INTERVAL (15000)
#endif

#ifndef MYNEWT_VAL_WATCHDOG_INTERVAL
#define MYNEWT_VAL_WATCHDOG_INTERVAL (30000)
#endif

/*** @apache-mynewt-core/libc/baselibc */
#ifndef MYNEWT_VAL_BASELIBC_ASSERT_FILE_LINE
#define MYNEWT_VAL_BASELIBC_ASSERT_FILE_LINE (0)
#endif

#ifndef MYNEWT_VAL_BASELIBC_EXECUTE_GLOBAL_CONSTRUCTORS
#define MYNEWT_VAL_BASELIBC_EXECUTE_GLOBAL_CONSTRUCTORS (1)
#endif

#ifndef MYNEWT_VAL_BASELIBC_PRESENT
#define MYNEWT_VAL_BASELIBC_PRESENT (1)
#endif

/*** @apache-mynewt-core/sys/console/stub */
#ifndef MYNEWT_VAL_CONSOLE_UART_BAUD
#define MYNEWT_VAL_CONSOLE_UART_BAUD (115200)
#endif

#ifndef MYNEWT_VAL_CONSOLE_UART_DEV
#define MYNEWT_VAL_CONSOLE_UART_DEV "uart0"
#endif

#ifndef MYNEWT_VAL_CONSOLE_UART_FLOW_CONTROL
#define MYNEWT_VAL_CONSOLE_UART_FLOW_CONTROL (UART_FLOW_CTL_NONE)
#endif

/*** @apache-mynewt-core/sys/flash_map */
#ifndef MYNEWT_VAL_FLASH_MAP_MAX_AREAS
#define MYNEWT_VAL_FLASH_MAP_MAX_AREAS (10)
#endif

#ifndef MYNEWT_VAL_FLASH_MAP_SUPPORT_MFG
#define MYNEWT_VAL_FLASH_MAP_SUPPORT_MFG (0)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10095 (defined by @apache-mynewt-core/sys/flash_map) */
#ifndef MYNEWT_VAL_FLASH_MAP_SYSINIT_STAGE
#define MYNEWT_VAL_FLASH_MAP_SYSINIT_STAGE (15)
#endif

/*** @apache-mynewt-core/sys/log/common */
#ifndef MYNEWT_VAL_DFLT_LOG_LVL
#define MYNEWT_VAL_DFLT_LOG_LVL (1)
#endif

#ifndef MYNEWT_VAL_DFLT_LOG_MOD
#define MYNEWT_VAL_DFLT_LOG_MOD (0)
#endif

#ifndef MYNEWT_VAL_LOG_GLOBAL_IDX
#define MYNEWT_VAL_LOG_GLOBAL_IDX (1)
#endif

/*** @apache-mynewt-core/sys/log/modlog */
#ifndef MYNEWT_VAL_MODLOG_CONSOLE_DFLT
#define MYNEWT_VAL_MODLOG_CONSOLE_DFLT (1)
#endif

#ifndef MYNEWT_VAL_MODLOG_LOG_MACROS
#define MYNEWT_VAL_MODLOG_LOG_MACROS (0)
#endif

#ifndef MYNEWT_VAL_MODLOG_MAX_MAPPINGS
#define MYNEWT_VAL_MODLOG_MAX_MAPPINGS (16)
#endif

#ifndef MYNEWT_VAL_MODLOG_MAX_PRINTF_LEN
#define MYNEWT_VAL_MODLOG_MAX_PRINTF_LEN (128)
#endif

#ifndef MYNEWT_VAL_MODLOG_SYSINIT_STAGE
#define MYNEWT_VAL_MODLOG_SYSINIT_STAGE (100)
#endif

/*** @apache-mynewt-core/sys/log/stub */
#ifndef MYNEWT_VAL_LOG_CONSOLE
#define MYNEWT_VAL_LOG_CONSOLE (1)
#endif

#ifndef MYNEWT_VAL_LOG_FCB
#define MYNEWT_VAL_LOG_FCB (0)
#endif

#ifndef MYNEWT_VAL_LOG_FCB_SLOT1
#define MYNEWT_VAL_LOG_FCB_SLOT1 (0)
#endif

#ifndef MYNEWT_VAL_LOG_LEVEL
#define MYNEWT_VAL_LOG_LEVEL (255)
#endif

/*** @apache-mynewt-core/sys/sys */
#ifndef MYNEWT_VAL_DEBUG_PANIC_ENABLED
#define MYNEWT_VAL_DEBUG_PANIC_ENABLED (1)
#endif

/*** @apache-mynewt-core/sys/sysdown */
#ifndef MYNEWT_VAL_SYSDOWN_CONSTRAIN_DOWN
#define MYNEWT_VAL_SYSDOWN_CONSTRAIN_DOWN (1)
#endif

#ifndef MYNEWT_VAL_SYSDOWN_PANIC_FILE_LINE
#define MYNEWT_VAL_SYSDOWN_PANIC_FILE_LINE (0)
#endif

#ifndef MYNEWT_VAL_SYSDOWN_PANIC_MESSAGE
#define MYNEWT_VAL_SYSDOWN_PANIC_MESSAGE (0)
#endif

#ifndef MYNEWT_VAL_SYSDOWN_TIMEOUT_MS
#define MYNEWT_VAL_SYSDOWN_TIMEOUT_MS (10000)
#endif

/*** @apache-mynewt-core/sys/sysinit */
/* Overridden by @mcuboot/boot/mynewt (defined by @apache-mynewt-core/sys/sysinit) */
#ifndef MYNEWT_VAL_SYSINIT_CONSTRAIN_INIT
#define MYNEWT_VAL_SYSINIT_CONSTRAIN_INIT (0)
#endif

#ifndef MYNEWT_VAL_SYSINIT_PANIC_FILE_LINE
#define MYNEWT_VAL_SYSINIT_PANIC_FILE_LINE (0)
#endif

#ifndef MYNEWT_VAL_SYSINIT_PANIC_MESSAGE
#define MYNEWT_VAL_SYSINIT_PANIC_MESSAGE (0)
#endif

/*** @apache-mynewt-core/util/rwlock */
#ifndef MYNEWT_VAL_RWLOCK_DEBUG
#define MYNEWT_VAL_RWLOCK_DEBUG (0)
#endif

/*** @mcuboot/boot/mynewt */
#ifndef MYNEWT_VAL_BOOT_CUSTOM_START
#define MYNEWT_VAL_BOOT_CUSTOM_START (0)
#endif

#ifndef MYNEWT_VAL_BOOT_LOADER
#define MYNEWT_VAL_BOOT_LOADER (1)
#endif

#ifndef MYNEWT_VAL_BOOT_SERIAL
#define MYNEWT_VAL_BOOT_SERIAL (0)
#endif

/*** @mcuboot/boot/mynewt/mcuboot_config */
#ifndef MYNEWT_VAL_BOOTUTIL_BOOTSTRAP
#define MYNEWT_VAL_BOOTUTIL_BOOTSTRAP (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_ENCRYPT_EC256
#define MYNEWT_VAL_BOOTUTIL_ENCRYPT_EC256 (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_ENCRYPT_KW
#define MYNEWT_VAL_BOOTUTIL_ENCRYPT_KW (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_ENCRYPT_RSA
#define MYNEWT_VAL_BOOTUTIL_ENCRYPT_RSA (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_ENCRYPT_X25519
#define MYNEWT_VAL_BOOTUTIL_ENCRYPT_X25519 (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_FEED_WATCHDOG
#define MYNEWT_VAL_BOOTUTIL_FEED_WATCHDOG (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_HAVE_LOGGING
#define MYNEWT_VAL_BOOTUTIL_HAVE_LOGGING (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_IMAGE_FORMAT_V2
#define MYNEWT_VAL_BOOTUTIL_IMAGE_FORMAT_V2 (1)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_IMAGE_NUMBER
#define MYNEWT_VAL_BOOTUTIL_IMAGE_NUMBER (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_LOG_LEVEL
#define MYNEWT_VAL_BOOTUTIL_LOG_LEVEL (BOOTUTIL_LOG_LEVEL_INFO)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_MAX_IMG_SECTORS
#define MYNEWT_VAL_BOOTUTIL_MAX_IMG_SECTORS (128)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_NO_LOGGING
#define MYNEWT_VAL_BOOTUTIL_NO_LOGGING (1)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_OVERWRITE_ONLY
#define MYNEWT_VAL_BOOTUTIL_OVERWRITE_ONLY (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_OVERWRITE_ONLY_FAST
#define MYNEWT_VAL_BOOTUTIL_OVERWRITE_ONLY_FAST (1)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_SIGN_EC
#define MYNEWT_VAL_BOOTUTIL_SIGN_EC (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_SIGN_EC256
#define MYNEWT_VAL_BOOTUTIL_SIGN_EC256 (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_SIGN_ED25519
#define MYNEWT_VAL_BOOTUTIL_SIGN_ED25519 (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_SIGN_RSA
#define MYNEWT_VAL_BOOTUTIL_SIGN_RSA (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_SIGN_RSA_LEN
#define MYNEWT_VAL_BOOTUTIL_SIGN_RSA_LEN (2048)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_SWAP_SAVE_ENCTLV
#define MYNEWT_VAL_BOOTUTIL_SWAP_SAVE_ENCTLV (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_SWAP_USING_MOVE
#define MYNEWT_VAL_BOOTUTIL_SWAP_USING_MOVE (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_USE_MBED_TLS
#define MYNEWT_VAL_BOOTUTIL_USE_MBED_TLS (1)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_USE_TINYCRYPT
#define MYNEWT_VAL_BOOTUTIL_USE_TINYCRYPT (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_VALIDATE_SLOT0
#define MYNEWT_VAL_BOOTUTIL_VALIDATE_SLOT0 (0)
#endif

/*** newt */
#ifndef MYNEWT_VAL_APP_NAME
#define MYNEWT_VAL_APP_NAME "mynewt"
#endif

#ifndef MYNEWT_VAL_APP_mynewt
#define MYNEWT_VAL_APP_mynewt (1)
#endif

#ifndef MYNEWT_VAL_ARCH_NAME
#define MYNEWT_VAL_ARCH_NAME "cortex_m33"
#endif

#ifndef MYNEWT_VAL_ARCH_cortex_m33
#define MYNEWT_VAL_ARCH_cortex_m33 (1)
#endif

#ifndef MYNEWT_VAL_BSP_NAME
#define MYNEWT_VAL_BSP_NAME "nordic_pca10095"
#endif

#ifndef MYNEWT_VAL_BSP_nordic_pca10095
#define MYNEWT_VAL_BSP_nordic_pca10095 (1)
#endif

#ifndef MYNEWT_VAL_NEWT_FEATURE_LOGCFG
#define MYNEWT_VAL_NEWT_FEATURE_LOGCFG (1)
#endif

#ifndef MYNEWT_VAL_NEWT_FEATURE_SYSDOWN
#define MYNEWT_VAL_NEWT_FEATURE_SYSDOWN (1)
#endif

#ifndef MYNEWT_VAL_TARGET_NAME
#define MYNEWT_VAL_TARGET_NAME "nrf53_blinky_boot_net"
#endif

#ifndef MYNEWT_VAL_TARGET_nrf53_blinky_boot_net
#define MYNEWT_VAL_TARGET_nrf53_blinky_boot_net (1)
#endif

#endif
