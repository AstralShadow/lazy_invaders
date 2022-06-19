#ifndef INCLUDE_GEOMETRY_HPP
#define INCLUDE_GEOMETRY_HPP

#include <utils/point.hpp>

/**
 * Returns if two segments intersect.
 *
 * Puts the intersection point in *result.
 */
bool segment_intersection(fpoint p1, fpoint p2,
                          fpoint p3, fpoint p4,
                          fpoint* p_out = nullptr);

#endif // INCLUDE_GEOMETRY_HPP
