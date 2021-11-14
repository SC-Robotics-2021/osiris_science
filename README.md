# science-gui

```bash
git clone https://github.com/SC-Robotics-2021/science-gui.git
cd science-gui
git checkout dev

```
# To Run the program

Open a terminal on the same directory as the root directory of this project (science-gui/)

```bash
source /opt/ros/foxy/setup.sh
cd science_ws
colcon build
. install/setup.sh
cd ..
python3 main.py
```
on a separeate terminal

```bash
source /opt/ros/foxy/setup.sh
. science_ws/install/setup.sh
python3 science_ws/src/push_button/push_button/button_subscriber.py
```
