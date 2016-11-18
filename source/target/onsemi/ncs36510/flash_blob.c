/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
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

#include "flash_blob.h"

static const uint32_t ncs36510_flash_prog_blob[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x4770ba40, 0x4770bac0, 0x4770ba40, 0x4770bac0, 0xf2402a03, 0xf0108030, 0xf0000c03, 0xf8118015, 
    0xf1bc3b01, 0x44620f02, 0xf811bf98, 0xf800cb01, 0xbf383b01, 0x3b01f811, 0x0204f1a2, 0xf800bf98, 
    0xbf38cb01, 0x3b01f800, 0x0303f011, 0x8025f000, 0xf0c03a08, 0xf8518008, 0x3a083b04, 0xcb04f851, 
    0x1008e8a0, 0x1d12e7f5, 0xf851bf5c, 0xf8403b04, 0xf3af3b04, 0x07d28000, 0xf811bf24, 0xf8113b01, 
    0xbf48cb01, 0x2b01f811, 0xf800bf24, 0xf8003b01, 0xbf48cb01, 0x2b01f800, 0xb5104770, 0xf0c03a20, 
    0xe8b1800b, 0x3a205018, 0x5018e8a0, 0x5018e8b1, 0x5018e8a0, 0xaff5f4bf, 0x7c02ea5f, 0xe8b1bf24, 
    0xe8a05018, 0xbf445018, 0xc018c918, 0x4010e8bd, 0x7c82ea5f, 0xf851bf24, 0xf8403b04, 0xbf083b04, 
    0x07d24770, 0xf831bf28, 0xbf483b02, 0x2b01f811, 0xf820bf28, 0xbf483b02, 0x2b01f800, 0x20004770, 
    0x00004770, 0xb5104805, 0xf0004478, 0x4804f8cd, 0xf0004478, 0x2000f8c9, 0x0000bd10, 0x00000414, 
    0x00000418, 0x9800b501, 0x5f00f5b0, 0x2001bf3c, 0xf5a0bd08, 0xf5b15100, 0xd2042fa0, 0x466a480c, 
    0x44782102, 0xf5a0e00f, 0xf5b121a4, 0xd20c2fa0, 0x21014a08, 0xf500444a, 0x70112030, 0x48069000, 
    0x2102466a, 0xf0004478, 0x2000f811, 0x0000bd08, 0x000003da, 0x00000004, 0x000003c4, 0x69c14770, 
    0x0f01f011, 0x69c0bf18, 0x00004770, 0x4c44b410, 0xc110f8df, 0xd27f2906, 0xf001e8df, 0x562a037e, 
    0x6801704a, 0x1f80f411, 0xf44fbf14, 0xf44f1181, 0x68425100, 0x684160d1, 0x6801610c, 0x1f80f411, 
    0xbf146841, 0xc018f8c1, 0xc014f8c1, 0x68422102, 0x68016091, 0xf4116840, 0xd0041f80, 0xf0116801, 
    0xd1fb0f02, 0x6801e058, 0x0f01f011, 0xe053d1fb, 0x68426811, 0x68026114, 0x1f80f412, 0xbf146842, 
    0xc018f8c2, 0xc014f8c2, 0x60d16842, 0x21016842, 0x68016091, 0xf4116840, 0xd0041f80, 0xf0116801, 
    0xd1fb0f02, 0x6801e038, 0x0f01f011, 0xe033d1fb, 0x68406801, 0x1f80f411, 0xbf146841, 0x0101f041, 
    0x0102f041, 0xe0276041, 0xf4116801, 0x68411f80, 0xbf14684a, 0x0201f022, 0x0202f022, 0x6801604a, 
    0xf4116840, 0xd0041f80, 0xf0116801, 0xd1fb0f02, 0x6801e012, 0x0f01f011, 0xe00dd1fb, 0x68406801, 
    0x1f80f411, 0x6801d004, 0x0f02f011, 0xe003d1fb, 0xf0116801, 0xd1fb0f01, 0x2001bc10, 0x00004770, 
    0xbb781ae9, 0xb56d9099, 0xf4116801, 0x68411f80, 0xf44fbf14, 0xf44f1281, 0x60ca5200, 0x49076842, 
    0x68016111, 0xf4116842, 0x49051f80, 0x6191bf14, 0x21026151, 0x60816840, 0x00004770, 0xbb781ae9, 
    0xb56d9099, 0x4a086843, 0x6802611a, 0xf4126843, 0x4a061f80, 0x619abf14, 0x6842615a, 0x684060d1, 
    0x60812101, 0x00004770, 0xbb781ae9, 0xb56d9099, 0x68406801, 0x1f80f411, 0xbf146841, 0x0101f041, 
    0x0102f041, 0x47706041, 0x68406801, 0x1f80f411, 0xbf146841, 0x0101f021, 0x0102f021, 0x47706041, 
    0x1e5b6808, 0xf810d305, 0xf802cb01, 0x1e5bcb01, 0x6008d2f9, 0x47702001, 0x68406801, 0x1f80f411, 
    0x6801d004, 0x0f02f011, 0x4770d1fb, 0xf0116801, 0xd1fb0f01, 0x00004770, 0x49056842, 0x68016111, 
    0xf4116840, 0x49031f80, 0x6181bf14, 0x47706141, 0xbb781ae9, 0xb56d9099, 0x4604b510, 0x46116808, 
    0x5f00f5b0, 0x020af3c0, 0xb132d20b, 0x020af3c0, 0x6200f5c2, 0xd9054293, 0xf5b3e00a, 0xd8076f00, 
    0xb13ae00b, 0x020af3c0, 0x6200f5c2, 0xd9044293, 0xbd102000, 0x6f00f5b3, 0x6862d8fa, 0xc004f8d2, 
    0x0c40f04c, 0xc004f8c2, 0xc004f8d4, 0xf8cc4a10, 0x68222010, 0xc004f8d4, 0x1f80f412, 0xbf144a0d, 
    0x2018f8cc, 0x2014f8cc, 0xf7ff461a, 0x6820fe01, 0x1f80f410, 0xd0046860, 0xf0116801, 0xd1fb0f02, 
    0x6801e003, 0x0f01f011, 0x2001d1fb, 0x0000bd10, 0xbb781ae9, 0xb56d9099, 0xb5104911, 0x20004449, 
    0x48107008, 0xf4216901, 0x61010100, 0xf0216901, 0x61014180, 0x490d480c, 0xf04f6001, 0x211f20e0, 
    0x1180f8c0, 0x1280f8c0, 0xf04f4909, 0x60086020, 0x22004808, 0x44782103, 0xfe88f7ff, 0xbd102000, 
    0x00000004, 0x4001b000, 0x4001e000, 0x2082353f, 0xe000ed04, 0x000000b2, 0x9800b507, 0x5f00f5b0, 
    0xf5a0d319, 0xf5bc5c00, 0xd2042fa0, 0x460b480d, 0x44784669, 0xf5a0e00b, 0xf5bc2ca4, 0xd20d2fa0, 
    0x2030f500, 0x48089000, 0x4669460b, 0xf7ff4478, 0x2801ff63, 0xb003d002, 0xbd002001, 0x2000b003, 
    0x0000bd00, 0x0000006a, 0x0000005c, 0xb5104908, 0x60c84806, 0x44484807, 0xb9287800, 0x22004806, 
    0x44782104, 0xfe42f7ff, 0xbd102000, 0x00031234, 0x40017000, 0x00000004, 0x00000026, 0x47702000, 
    0x00000000, 0x40017000, 0x00000008, 0x00100000, 0x40017000, 0x00000008, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 
};

static const program_target_t flash = {
    0x3FFF4459, // init
    0x3FFF450D, // uninit
    0x3FFF4125, // eraseAll
    0x3FFF4145, // erase_sector
    0x3FFF44B9, // program_page

    // BKPT : start of blob + 1
    // RSB  : blob start + header + rw data offset
    // RSP  : stack pointer
    {
        0x3fff4000 + 0x00000001,
        0x3fff4000 + 0x00000020 + 0x00000538,
        0x3fff4800
    },

    0x3fff4000 + 0x00000A00,   // mem buffer location
    0x3fff4000,                // location to write prog_blob in target RAM
    sizeof(ncs36510_flash_prog_blob), // prog_blob size
    ncs36510_flash_prog_blob,         // address of prog_blob
    512                 // ram_to_flash_bytes_to_be_written - should be less than 512 bytes or divisible into 512 (MSD only sends 512 bytes at a time)
};
