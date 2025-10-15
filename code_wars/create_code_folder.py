import os
import argparse


def create_files(title, difficulty, file_endings=None):
    base_dir = os.path.dirname(os.path.abspath(__file__))

    dir_path = os.path.join(base_dir, f"{difficulty}kyu/{title}")
    os.makedirs(dir_path, exist_ok=True)

    if file_endings is None:
        file_endings = ["go", "ts", "py", "cpp"]

    for ending in file_endings:
        file_name = f"{title}.{ending}"
        file_path = os.path.join(dir_path, file_name)

        with open(file_path, "w") as file:
            file.write("")

    print(f"files created in {dir_path}")


def main():
    parser = argparse.ArgumentParser(
        description="Create directory and file for a given title and difficulty level."
    )
    parser.add_argument("title", type=str, help="the title for the files")
    parser.add_argument(
        "difficulty", type=int, help="the difficulty level of the code exercise"
    )
    parser.add_argument(
        "--file_endings",
        type=str,
        default=None,
        help="Comma-separated ist of file ending.",
    )

    args = parser.parse_args()

    if args.file_endings:
        file_endings_list = args.file_endings.split(",")
    else:
        file_endings_list = None

    create_files(args.title, args.difficulty, file_endings_list)


if __name__ == "__main__":
    main()
