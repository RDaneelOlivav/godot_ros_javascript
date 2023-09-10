/* GodotRosJavascript.cpp */

#include "godot_ros_javascript.h"

void GodotRosJavascript::add(int p_value) {
    count += p_value;
}

void GodotRosJavascript::reset() {
    count = 0;
}

int GodotRosJavascript::get_total() const {
    return count;
}

void GodotRosJavascript::_bind_methods() {
    ClassDB::bind_method(D_METHOD("add", "value"), &GodotRosJavascript::add);
    ClassDB::bind_method(D_METHOD("reset"), &GodotRosJavascript::reset);
    ClassDB::bind_method(D_METHOD("get_total"), &GodotRosJavascript::get_total);
}

GodotRosJavascript::GodotRosJavascript() {
    count = 0;
}