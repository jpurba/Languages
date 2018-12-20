:Date format = %date%
:day = %date:~0,2%
:mm = %date:~4,2%
:dd = %date:~7,2%
:yyyy = %date:~10,4%

:Time format = %time%
:hh = %time:~0,2%
:mm = %time:~3,2%
:ss = %time:~6,2%

echo off
cls
:SETLOCAL
:set myTimeStamp=%date:~10,4%%date:~4,2%%date:~7,2%-%time:~0,2%%time:~3,2%%time:~6,2%
 
perl countMemoryInput.pl %myTimeStamp% A01.txt
perl countMemoryInput.pl %myTimeStamp% A02.txt
perl countMemoryInput.pl %myTimeStamp% A03.txt
perl countMemoryInput.pl %myTimeStamp% A04.txt
perl countMemoryInput.pl %myTimeStamp% A05.txt
perl countMemoryInput.pl %myTimeStamp% A06.txt
perl countMemoryInput.pl %myTimeStamp% A07.txt
perl countMemoryInput.pl %myTimeStamp% A08.txt
perl countMemoryInput.pl %myTimeStamp% A09.txt
perl countMemoryInput.pl %myTimeStamp% A10.txt
perl countMemoryInput.pl %myTimeStamp% A11.txt
perl countMemoryInput.pl %myTimeStamp% A12.txt
perl countMemoryInput.pl %myTimeStamp% A13.txt
perl countMemoryInput.pl %myTimeStamp% A14.txt
perl countMemoryInput.pl %myTimeStamp% A15.txt
perl countMemoryInput.pl %myTimeStamp% A16.txt

perl countMemoryInput.pl %myTimeStamp% B01.txt
perl countMemoryInput.pl %myTimeStamp% B02.txt
perl countMemoryInput.pl %myTimeStamp% B03.txt
perl countMemoryInput.pl %myTimeStamp% B04.txt
perl countMemoryInput.pl %myTimeStamp% B05.txt
perl countMemoryInput.pl %myTimeStamp% B06.txt
perl countMemoryInput.pl %myTimeStamp% B07.txt
perl countMemoryInput.pl %myTimeStamp% B08.txt
perl countMemoryInput.pl %myTimeStamp% B09.txt
perl countMemoryInput.pl %myTimeStamp% B10.txt
perl countMemoryInput.pl %myTimeStamp% B11.txt
perl countMemoryInput.pl %myTimeStamp% B12.txt
perl countMemoryInput.pl %myTimeStamp% B13.txt
perl countMemoryInput.pl %myTimeStamp% B14.txt
perl countMemoryInput.pl %myTimeStamp% B15.txt
perl countMemoryInput.pl %myTimeStamp% B16.txt

pause