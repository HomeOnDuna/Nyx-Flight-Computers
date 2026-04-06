// Created by Timothy Paige as the control logic for project Oneroi
// Last updated 2026/2/10
// Minimise Global variable

#define GNSS_INIT_STATE functional;

// Data formats:
struct vector {
    long float x;
    long float y;
    long float z;
};

struct direction {
    float a;
    float b;
    float c;
    float d;
};

struct gnss {
    long float lat;
    long float lon;
    long float alt;
};

enum vehicle_state {
    launchpad_diagnostics, launch_detect, boost, coast, 
    apogee, drogue_chute, main_chute, landed
};

enum failure_states {
    functional, degraded, suspicous, lost_axis_1, lost_axis_2, lost_axis_3, 
    lost_axis_12, lost_axis_13, lost_axis_23, bad_data, unresponsive
};

struct raw_data {
    struct vector accelerometer_1;
    struct vector accelerometer_2;
    struct vector accelerometer_3;
    int barometer_1;
    int barometer_2;
    int barometer_3;
    struct vector gyroscope_1;
    struct vector gyroscope_2;
    struct vector gyroscope_3;
    struct vector magnetometer;
    int temperature;
    struct gnss gnss;
};

struct failure_table {
    enum failure_states accelerometer_1;
    enum failure_states accelerometer_2;
    enum failure_states accelerometer_3;
    enum failure_states barometer_1;
    enum failure_states barometer_2;
    enum failure_states barometer_3;
    enum failure_states gyroscope_1;
    enum failure_states gyroscope_2;
    enum failure_states gyroscope_3;
    enum failure_states magnetometer;
    enum failure_states gnss;
};

struct state {
    enum vehicle_state vehicle_state;
    struct vector acceleration;
    struct vector velocity;
    struct vector position;
    struct direction direction;
    int acceleration_magnitude;
    struct raw_data raw_data;
    struct failure_table failure_table;
};

// Global variables:
struct state current_state;

// Prototypes:
void zeroed_state();

int main() {
    zeroed_state();
    printf("%d", sizeof(struct state));
    return 0;
}

void zeroed_state() {
    current_state.acceleration.x = 0;
    current_state.acceleration.y = 0;
    current_state.acceleration.z = 0;
    current_state.acceleration_magnitude = 0;
    current_state.direction.a = 0;
    current_state.direction.b = 0;
    current_state.direction.c = 0;
    current_state.direction.d = 0;
    current_state.failure_table.accelerometer_1 = functional;
    current_state.failure_table.accelerometer_2 = functional;
    current_state.failure_table.accelerometer_3 = functional;
    current_state.failure_table.barometer_1 = functional;
    current_state.failure_table.barometer_2 = functional;
    current_state.failure_table.barometer_3 = functional;
    current_state.failure_table.gnss = GNSS_INIT_STATE;
    current_state.failure_table.gyroscope_1 = functional;
    current_state.failure_table.gyroscope_2 = functional;
    current_state.failure_table.gyroscope_3 = functional;
    current_state.failure_table.magnetometer = functional;
    current_state.position.x = 0;
    current_state.position.y = 0;
    current_state.position.z = 0;
    current_state.vehicle_state = launchpad_diagnostics;
    current_state.velocity.x = 0;
    current_state.velocity.y = 0;
    current_state.velocity.z = 0;
}