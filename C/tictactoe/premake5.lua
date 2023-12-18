-- premake5.lua
workspace "TicTacToe"
    configurations { "Debug", "Release" }

project "TicTacToe"
    kind "ConsoleApp"
    language "C"
    targetdir "bin/%{cfg.buildcfg}"

    files { "src/**.c"}
    includedirs { "src" }

    filter "configurations:Debug"
        symbols "On"

    filter "configurations:Release"
        optimize "On"
