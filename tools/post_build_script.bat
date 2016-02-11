set KEIL_ARM=%2
set TOOLS=..\..\..\tools
REM make sure fromelf is part of path
set path=%KEIL_ARM%\ARMCC\bin;%path%
set base_name= %1
fromelf --bin %base_name%.axf -o %base_name%.bin
fromelf --i32 %base_name%.axf -o %base_name%.hex
python %TOOLS%\post_compute_crc.py %base_name%.hex %base_name%_crc.hex --bin %base_name%_crc.bin
python %TOOLS%\offset_update.py --start 0x8000 --padded_start 0x5000 %base_name%_crc.bin --output %base_name%_crc_0x5000.bin
REM Always return success
exit 0
