# Judge-format submissions

The topic folders hold standalone programs that read from `stdin` and write to
`stdout` — the form CodeChef accepts and the form the course expects.

LeetCode and GeeksforGeeks do not take whole programs. They supply a driver and
expect only a function or class body with a fixed signature. The files here are
the same algorithms rewritten to those signatures, kept separate so the topic
folders stay in the course's format.

| Folder | Judge | Shape expected |
|--------|-------|----------------|
| `leetcode/` | LeetCode | `class Solution { public: ... };`, no `main`, headers already included by the judge |

Each file is named by problem number and title.
