//this file was auto-generated by res2h

#include "Resources.h"

const size_t res2hNrOfFiles = 6;
const Res2hEntry res2hFiles[res2hNrOfFiles] = {
    {":/button.png", button_png_size, button_png_data},
    {":/ES_logo_16.png", ES_logo_16_png_size, ES_logo_16_png_data},
    {":/ES_logo_32.png", ES_logo_32_png_size, ES_logo_32_png_data},
    {":/frame.png", frame_png_size, frame_png_data},
    {":/textbox.png", textbox_png_size, textbox_png_data},
    {":/textbox_glow.png", textbox_glow_png_size, textbox_glow_png_data}
};

res2hMapType::value_type mapTemp[] = {
    std::make_pair(":/button.png", res2hFiles[0]),
    std::make_pair(":/ES_logo_16.png", res2hFiles[1]),
    std::make_pair(":/ES_logo_32.png", res2hFiles[2]),
    std::make_pair(":/frame.png", res2hFiles[3]),
    std::make_pair(":/textbox.png", res2hFiles[4]),
    std::make_pair(":/textbox_glow.png", res2hFiles[5])
};

res2hMapType res2hMap(mapTemp, mapTemp + sizeof mapTemp / sizeof mapTemp[0]);
