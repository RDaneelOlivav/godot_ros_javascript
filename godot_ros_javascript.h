/* godot_ros_javascript.h */

#ifndef GODOT_ROS_JAVASCRIPT_H
#define GODOT_ROS_JAVASCRIPT_H

#include "core/object/ref_counted.h"

class GodotRosJavascript : public RefCounted {
    GDCLASS(GodotRosJavascript, RefCounted);

    int count;

protected:
    static void _bind_methods();

public:
    void add(int p_value);
    void reset();
    int get_total() const;

    GodotRosJavascript();
};

#endif // GODOT_ROS_JAVASCRIPT