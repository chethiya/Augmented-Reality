const double PI = 3.14159265358979323846;

const double GAUSSIAN_DERIVATIVE[5] = {-3 * .0625, -5 * .0625, 0, 5 * .0625, 3 * .0625};

const double SCALE_SQRT = 2.0;
const double SCALE = 2.0;

const double LINE_DISTANCE_THRESHOLD = 4 / SCALE;
const double ANGLE_THRESHOLD = PI / 20;
const double VOTES_THRESHOLD = 10 / SCALE;

const double SMALL_SEGMENT_LENGTH_SQ_THRESHOLD = 250 / SCALE;
const double SEGMENT_ANGLE_THRESHOLD = PI / 20;
const double SEGMENT_MERGE_LENGTH_SQ_THRESHOLD = 1000 / SCALE;

const double EDGE_THRESHOLD = 20;

const double CORNER_ANGLE_THRESHOLD = PI / 20;
const double CORNER_SEGMENT_DISTANCE_THRESHOLD = 50 / SCALE;
const double CORNER_MAGNITUDE_THRESHOLD = 1e-9;

