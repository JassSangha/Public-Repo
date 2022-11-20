@echo off
color 57
echo kida, type(vdia/nai_vdia) only
set /p ans=
if %ans%==vdia goto method1
if %ans%==nai_vdia goto method2
:method1
echo fe mai ki kra!!
pause
exit
:method2
echo 2 min silence for you :(
pause
timeout 10
shutdown -s -t 10