/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"
#include "godot_ros_javascript.h"

void register_godot_ros_javascript_types() {
    ClassDB::register_class<GodotRosJavascript>();
}

void unregister_godot_ros_javascript_types() {
   // Nothing to do here in this example.
}