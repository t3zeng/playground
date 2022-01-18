/**
 * This file was generated by Apache newt version: 1.9.0
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
#define MYNEWT_VAL_REPO_HASH_APACHE_MYNEWT_CORE ("77169d63b1a5040b25b3d0205291c2f339633bd6-dirty")
#endif

#ifndef MYNEWT_VAL_REPO_VERSION_APACHE_MYNEWT_CORE
#define MYNEWT_VAL_REPO_VERSION_APACHE_MYNEWT_CORE ("0.0.0")
#endif

/*** Repository @apache-mynewt-mcumgr info */
#ifndef MYNEWT_VAL_REPO_HASH_APACHE_MYNEWT_MCUMGR
#define MYNEWT_VAL_REPO_HASH_APACHE_MYNEWT_MCUMGR ("2a63188477835d1c816d06788bf29c62973956eb")
#endif

#ifndef MYNEWT_VAL_REPO_VERSION_APACHE_MYNEWT_MCUMGR
#define MYNEWT_VAL_REPO_VERSION_APACHE_MYNEWT_MCUMGR ("0.0.0")
#endif

/*** Repository @apache-mynewt-nimble info */
#ifndef MYNEWT_VAL_REPO_HASH_APACHE_MYNEWT_NIMBLE
#define MYNEWT_VAL_REPO_HASH_APACHE_MYNEWT_NIMBLE ("f83627a31d52bd23a63bebfa623b50484840a947-dirty")
#endif

#ifndef MYNEWT_VAL_REPO_VERSION_APACHE_MYNEWT_NIMBLE
#define MYNEWT_VAL_REPO_VERSION_APACHE_MYNEWT_NIMBLE ("0.0.0")
#endif

/*** Repository @mcuboot info */
#ifndef MYNEWT_VAL_REPO_HASH_MCUBOOT
#define MYNEWT_VAL_REPO_HASH_MCUBOOT ("137d79717764ed32d5da4b4b301f32f81b2bf40f")
#endif

#ifndef MYNEWT_VAL_REPO_VERSION_MCUBOOT
#define MYNEWT_VAL_REPO_VERSION_MCUBOOT ("0.0.0")
#endif



/*** @apache-mynewt-core/compiler/arm-none-eabi-m4 */
#ifndef MYNEWT_VAL_HARDFLOAT
#define MYNEWT_VAL_HARDFLOAT (0)
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

/*** @apache-mynewt-core/hw/bsp/apollo3_edge */
#ifndef MYNEWT_VAL_BSP_APOLLO3
#define MYNEWT_VAL_BSP_APOLLO3 (1)
#endif

#ifndef MYNEWT_VAL_SPI_0_MASTER_PIN_MISO
#define MYNEWT_VAL_SPI_0_MASTER_PIN_MISO (6)
#endif

#ifndef MYNEWT_VAL_SPI_0_MASTER_PIN_MOSI
#define MYNEWT_VAL_SPI_0_MASTER_PIN_MOSI (7)
#endif

#ifndef MYNEWT_VAL_SPI_0_MASTER_PIN_SCK
#define MYNEWT_VAL_SPI_0_MASTER_PIN_SCK (5)
#endif

#ifndef MYNEWT_VAL_SPI_1_MASTER_PIN_MISO
#define MYNEWT_VAL_SPI_1_MASTER_PIN_MISO (9)
#endif

#ifndef MYNEWT_VAL_SPI_1_MASTER_PIN_MOSI
#define MYNEWT_VAL_SPI_1_MASTER_PIN_MOSI (10)
#endif

#ifndef MYNEWT_VAL_SPI_1_MASTER_PIN_SCK
#define MYNEWT_VAL_SPI_1_MASTER_PIN_SCK (8)
#endif

#ifndef MYNEWT_VAL_SPI_2_MASTER_PIN_MISO
#define MYNEWT_VAL_SPI_2_MASTER_PIN_MISO (25)
#endif

#ifndef MYNEWT_VAL_SPI_2_MASTER_PIN_MOSI
#define MYNEWT_VAL_SPI_2_MASTER_PIN_MOSI (28)
#endif

#ifndef MYNEWT_VAL_SPI_2_MASTER_PIN_SCK
#define MYNEWT_VAL_SPI_2_MASTER_PIN_SCK (27)
#endif

#ifndef MYNEWT_VAL_SPI_3_MASTER_PIN_MISO
#define MYNEWT_VAL_SPI_3_MASTER_PIN_MISO (43)
#endif

#ifndef MYNEWT_VAL_SPI_3_MASTER_PIN_MOSI
#define MYNEWT_VAL_SPI_3_MASTER_PIN_MOSI (38)
#endif

#ifndef MYNEWT_VAL_SPI_3_MASTER_PIN_SCK
#define MYNEWT_VAL_SPI_3_MASTER_PIN_SCK (42)
#endif

#ifndef MYNEWT_VAL_SPI_4_MASTER_PIN_MISO
#define MYNEWT_VAL_SPI_4_MASTER_PIN_MISO (40)
#endif

#ifndef MYNEWT_VAL_SPI_4_MASTER_PIN_MOSI
#define MYNEWT_VAL_SPI_4_MASTER_PIN_MOSI (44)
#endif

#ifndef MYNEWT_VAL_SPI_4_MASTER_PIN_SCK
#define MYNEWT_VAL_SPI_4_MASTER_PIN_SCK (39)
#endif

#ifndef MYNEWT_VAL_SPI_5_MASTER_PIN_MISO
#define MYNEWT_VAL_SPI_5_MASTER_PIN_MISO (49)
#endif

#ifndef MYNEWT_VAL_SPI_5_MASTER_PIN_MOSI
#define MYNEWT_VAL_SPI_5_MASTER_PIN_MOSI (47)
#endif

#ifndef MYNEWT_VAL_SPI_5_MASTER_PIN_SCK
#define MYNEWT_VAL_SPI_5_MASTER_PIN_SCK (48)
#endif

#ifndef MYNEWT_VAL_UART_0
#define MYNEWT_VAL_UART_0 (1)
#endif

#ifndef MYNEWT_VAL_UART_0_PIN_CTS
#define MYNEWT_VAL_UART_0_PIN_CTS (38)
#endif

#ifndef MYNEWT_VAL_UART_0_PIN_RTS
#define MYNEWT_VAL_UART_0_PIN_RTS (41)
#endif

#ifndef MYNEWT_VAL_UART_0_PIN_RX
#define MYNEWT_VAL_UART_0_PIN_RX (49)
#endif

#ifndef MYNEWT_VAL_UART_0_PIN_TX
#define MYNEWT_VAL_UART_0_PIN_TX (48)
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

/*** @apache-mynewt-core/hw/mcu/ambiq/apollo3 */
#ifndef MYNEWT_VAL_MCU_APOLLO3
#define MYNEWT_VAL_MCU_APOLLO3 (1)
#endif

#ifndef MYNEWT_VAL_MCU_FLASH_MIN_WRITE_SIZE
#define MYNEWT_VAL_MCU_FLASH_MIN_WRITE_SIZE (1)
#endif

#ifndef MYNEWT_VAL_SPI_0_MASTER
#define MYNEWT_VAL_SPI_0_MASTER (0)
#endif

#ifndef MYNEWT_VAL_SPI_0_SLAVE
#define MYNEWT_VAL_SPI_0_SLAVE (0)
#endif

#ifndef MYNEWT_VAL_SPI_1_MASTER
#define MYNEWT_VAL_SPI_1_MASTER (0)
#endif

#ifndef MYNEWT_VAL_SPI_1_SLAVE
#define MYNEWT_VAL_SPI_1_SLAVE (0)
#endif

#ifndef MYNEWT_VAL_SPI_2_MASTER
#define MYNEWT_VAL_SPI_2_MASTER (0)
#endif

#ifndef MYNEWT_VAL_SPI_2_SLAVE
#define MYNEWT_VAL_SPI_2_SLAVE (0)
#endif

#ifndef MYNEWT_VAL_SPI_3_MASTER
#define MYNEWT_VAL_SPI_3_MASTER (0)
#endif

#ifndef MYNEWT_VAL_SPI_3_SLAVE
#define MYNEWT_VAL_SPI_3_SLAVE (0)
#endif

#ifndef MYNEWT_VAL_SPI_4_MASTER
#define MYNEWT_VAL_SPI_4_MASTER (0)
#endif

#ifndef MYNEWT_VAL_SPI_4_SLAVE
#define MYNEWT_VAL_SPI_4_SLAVE (0)
#endif

#ifndef MYNEWT_VAL_SPI_5_MASTER
#define MYNEWT_VAL_SPI_5_MASTER (0)
#endif

#ifndef MYNEWT_VAL_SPI_5_SLAVE
#define MYNEWT_VAL_SPI_5_SLAVE (0)
#endif

#ifndef MYNEWT_VAL_TIMER_0_SOURCE
#define MYNEWT_VAL_TIMER_0_SOURCE (APOLLO3_TIMER_SOURCE_HFRC)
#endif

#undef MYNEWT_VAL_TIMER_1_SOURCE

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

/* Overridden by @apache-mynewt-core/hw/mcu/ambiq/apollo3 (defined by @apache-mynewt-core/kernel/os) */
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
#define MYNEWT_VAL_CONSOLE_UART_DEV ("uart0")
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

#ifndef MYNEWT_VAL_FLASH_MAP_SYSINIT_STAGE
#define MYNEWT_VAL_FLASH_MAP_SYSINIT_STAGE (9)
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
#define MYNEWT_VAL_APP_NAME ("mynewt")
#endif

#ifndef MYNEWT_VAL_APP_mynewt
#define MYNEWT_VAL_APP_mynewt (1)
#endif

#ifndef MYNEWT_VAL_ARCH_NAME
#define MYNEWT_VAL_ARCH_NAME ("cortex_m4")
#endif

#ifndef MYNEWT_VAL_ARCH_cortex_m4
#define MYNEWT_VAL_ARCH_cortex_m4 (1)
#endif

#ifndef MYNEWT_VAL_BSP_NAME
#define MYNEWT_VAL_BSP_NAME ("apollo3_edge")
#endif

#ifndef MYNEWT_VAL_BSP_apollo3_edge
#define MYNEWT_VAL_BSP_apollo3_edge (1)
#endif

#ifndef MYNEWT_VAL_NEWT_FEATURE_LOGCFG
#define MYNEWT_VAL_NEWT_FEATURE_LOGCFG (1)
#endif

#ifndef MYNEWT_VAL_NEWT_FEATURE_SYSDOWN
#define MYNEWT_VAL_NEWT_FEATURE_SYSDOWN (1)
#endif

#ifndef MYNEWT_VAL_TARGET_NAME
#define MYNEWT_VAL_TARGET_NAME ("my_blinky_boot")
#endif

#ifndef MYNEWT_VAL_TARGET_my_blinky_boot
#define MYNEWT_VAL_TARGET_my_blinky_boot (1)
#endif

#endif
