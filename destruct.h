#define var(type, name) __attribute__((cleanup (destroy_##type))) type name = default_construct_##type()
#define vara(type, name, ...) __attribute__((cleanup (destroy_##type))) type name = construct_##type(__VA_ARGS__)

