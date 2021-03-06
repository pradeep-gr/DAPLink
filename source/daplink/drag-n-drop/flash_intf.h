/* CMSIS-DAP Interface Firmware
 * Copyright (c) 2009-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
#ifndef FLASH_INTF_H
#define FLASH_INTF_H

#include <stdint.h>
#include "error.h"

typedef error_t (*flash_intf_init_cb_t)(void);
typedef error_t (*flash_intf_uninit_cb_t)(void);
typedef error_t (*flash_intf_program_page_cb_t)(uint32_t addr, const uint8_t * buf, uint32_t size);
typedef error_t (*flash_intf_erase_sector_cb_t)(uint32_t sector);
typedef error_t (*flash_intf_erase_chip_cb_t)(void);
typedef uint32_t (*flash_program_page_min_size_cb_t)(uint32_t addr);
typedef uint32_t (*flash_erase_sector_size_cb_t)(uint32_t addr);

typedef struct {
    flash_intf_init_cb_t init;
    flash_intf_uninit_cb_t uninit;
    flash_intf_program_page_cb_t program_page;
    flash_intf_erase_sector_cb_t erase_sector;
    flash_intf_erase_chip_cb_t erase_chip;
    flash_program_page_min_size_cb_t program_page_min_size;
    flash_erase_sector_size_cb_t erase_sector_size;
} flash_intf_t;

// All flash interfaces.  Unsupported interfaces are NULL.
extern const flash_intf_t * const flash_intf_iap_protected;
extern const flash_intf_t * const flash_intf_target;
extern const flash_intf_t * const flash_intf_target_custom;

#endif
