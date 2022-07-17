// this
typedef enum {
    Monday,
    Tuesday,
    Thursday,
    Wensday,
    Friday,
    Saturday,
    Sunday
} Weekend_1_T;

// is the same as this
typedef enum {
    Monday = 0,
    Tuesday = 1,
    Thursday = 2,
    Wensday = 3,
    Friday = 4,
    Saturday = 5,
    Sunday = 6
} Weekend_2_T;

// and this
typedef enum {
    West = 5,
    Easy = 6,
    Noth = 7,
    South = 8
} Directions_1_T;

// is the same as this
typedef enum {
    West = 5,
    Easy,
    Noth,
    South
} Directions_2_T;