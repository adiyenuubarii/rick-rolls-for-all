@echo off
for /f "delims=: tokens=*" %%A in ('findstr /b ::: "%~f0"') do @echo(%%A
:::                 ______               
:::                 |  _  \              
:::  _ __ ___  _ __ | | | |_____   _____ 
::: | '_ ` _ \| '_ \| | | / _ \ \ / / __|
::: | | | | | | | | | |/ /  __/\ V /\__ \
::: |_| |_| |_|_| |_|___/ \___| \_/ |___/
:::
:::
:::       _       _                _ _ 
:::      (_)     | |              | | |
:::  ____ _  ____| |  _  ____ ___ | | |
::: / ___) |/ ___) | / )/ ___) _ \| | |
:::| |   | ( (___| |< (| |  | |_| | | |
:::|_|   |_|\____)_| \_)_|   \___/|_|_|
:::


if exist "%userprofile%/AppData/Roaming/Microsoft/Windows/Start Menu/Programs/Startup/%~n0%~x0" (
start "" https://www.youtube.com/watch?v=dQw4w9WgXcQ
pause

) else (
copy /y %~f0 "%AppData%\Microsoft\Windows\Start Menu\Programs\Startup\"
start "" https://www.youtube.com/watch?v=dQw4w9WgXcQ
)
cls
