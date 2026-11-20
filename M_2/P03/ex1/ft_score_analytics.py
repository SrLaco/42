#!/usr/bin/env python3
import sys


def get_scores(args: list[str]) -> list[int]:
    scores: list[int] = []
    for arg in args:
        try:
            score = int(arg)
            scores.append(score)
        except ValueError:
            print(f"Invalid parameter: '{arg}'")
    return scores


def calc_scores(scores: list[int]) -> None:
    print(f"Scores processed: {scores}")
    print(f"Total players: {len(scores)}")
    print(f"Total score: {sum(scores)}")
    print(f"Average score: {sum(scores) / len(scores):.1f}")
    print(f"High score: {max(scores)}")
    print(f"Low score: {min(scores)}")
    print(f"Score range: {max(scores) - min(scores)}")


def show_scores() -> None:
    args = sys.argv[1:]
    print("=== Player Score Analytics ===")
    scores = get_scores(args)
    if not scores:
        print("No scores provided. Usage: "
              "python3 ft_score_analytics.py <score1> <score2> ...")
    else:
        calc_scores(scores)


if __name__ == "__main__":
    show_scores()
