#!/bin/python3

import argparse


def calculate_grade(points, p1=100, p4=None):
    """
    Calculate the resulting grade N based on the provided formula.

    args:
            - points: actual score (float)
            - p1: score required for grade 1.0 (default: 100)
            - p4: score required for grade 4.0 (default: p1 / 2)

    returns:
            - N: resulting grade (float)
    """
    if p4 is None:
        p4 = p1 / 2

    denominator = p4 - p1 - 0.1

    grade = (1 - (3.1 * p1) / denominator) + (3.1 * points) / denominator
    grade = max(1, min(5, grade))

    return grade


def main():

    parser = argparse.ArgumentParser(
        description="Calculate the resulting DHBW grade based on points scored."
    )
    parser.add_argument("points", type=float, help="Actual score in points(float)")
    parser.add_argument(
        "-p1",
        type=float,
        default=100,
        help="Score required for grade 1.0 (default: 100)",
    )
    parser.add_argument(
        "-p4",
        type=float,
        default=None,
        help="Score required for grade 4.0 (default: p1 / 2)",
    )

    args = parser.parse_args()
    grade = calculate_grade(args.points, args.p1, args.p4)
    print(f"Calculated grade: {grade:.2f}")


if __name__ == "__main__":
    main()
