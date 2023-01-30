from pcconfig import config

import pynecone as pc


class State(pc.State):
    val: str = "Nothing to see here"

    def decrement(self):
        print("sxv")
        self.val = "-1 the num"

    def increment(self):
        print("sxv")
        self.val = "+1 the num"


def index():
    return pc.center(
        pc.vstack(
            pc.heading("Welcome to Pynecone!", font_size="2em"),
            pc.hstack(
                pc.button(
                    "Negative",
                    color_scheme="red",
                    on_click=State.decrement,
                ),

                pc.button(
                    "Positive",
                    color_scheme="green",
                    on_click=State.increment,
                ),
            ),

            pc.text(State.val),

            pc.circular_progress(
                pc.circular_progress_label(),
            ),

            pc.image(
                src="https://cdn.dribbble.com/users/89278/screenshots/15192055/media/4a783a8d71a9f0e89c16f4c68e7fb3e5.jpg?compress=1&resize=400x300"
            ),

            pc.heading(
                "Human After All",
                font_size="2em"
            ),

            spacing="1.5em",
            font_size="2em",
        ),
        padding_top="10%",
    )


# Add state and page to the app.
app = pc.App(state=State)
app.add_page(index)
app.compile()
