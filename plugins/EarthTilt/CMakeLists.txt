add_subdirectory(src)

set(EarthTilt_SRCS
    src/EarthTilt.cpp
    src/EarthTiltGui.cpp
)

set(EarthTilt_HDRS
    src/EarthTilt.hpp
    src/EarthTiltGui.hpp
)

# Создаем библиотеку плагина
add_library(EarthTilt MODULE ${EarthTilt_SRCS} ${EarthTilt_HDRS})

# Подключаем Qt и Stellarium
target_link_libraries(EarthTilt Stellarium::stellarium-lib Qt6::Core Qt6::Widgets Qt6::Gui)

# Регистрация плагина
stel_plugin(EarthTilt)
