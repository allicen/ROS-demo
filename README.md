<h2>ROS</h2>
<h3>Ссылки для скачивания</h3>
<p><a href="http://releases.ubuntu.com/18.04/">Ubuntu 18.04</a></p>
<p><a href="https://losst.ru/ustanovka-ubuntu-18-04">Установка Ubuntu</a></p>
<p><a href="http://wiki.ros.org/melodic/Installation/Ubuntu">Ubuntu install of ROS Melodic</a></p>
<h3>Команды</h3>

<h4>Установка доп.пакета</h4>
<p>Скачать доп. пакет: <code>sudo apt-get install ros-melodic-gmapping</code></p>
<p>Путь до пакета: <code>rospack find gmapping</code></p>
<p>Содержимое пакета: <code>rosls gmapping</code></p>

<h4>Запуск простой ноды</h4>
<p>Запуск ROS в 1м терминале: <code>roscore</code></p>
<p>Запустить ноду (черепаха) во 2м терминале: <code>rosrun turtlesim turtlesim_node</code></p>
<p>Запустить ноду (движение с клавиатуры) в 3м терминале: <code>rosrun turtlesim turtle_teleop_key</code></p>
<p>Посмотреть ноды: <code>rosnode list</code></p>
<p>Запустить ноду с именем: <code>rosrun turtlesim turtlesim_node __name:=node_second</code></p>
<p>Узнать информацию о ноде: <code>rosnode info /node_second</code></p>
<p>Узнать информацию о топике: <code>rostopic info /turtle1/cmd_vel</code></p>
<p>Узнать информацию о типе топика: <code>rosmsg show geometry_msgs/Twist</code></p>
<p>Распечатать сообщение из топика: <code>rostopic echo /turtle1/cmd_vel</code></p>
<p>Построить RQT-граф связи нод: <code>rosrun rqt_graph rqt_graph</code></p>
<p>Топик - сообщение от одного ко многим. Не ожидает подтверждения подписчика.</p>
<p>Сервис - сообщение от одного к одному. Ожидает подтверждения от подписчика.</p>
<p>Посмотреть список сервисов: <code>rosservice list</code></p>
<p>Вызвать сервис: <code>rosservice call /clear</code></p>
<p>Показать информацию о сервисе: <code>rossrv show turtlesim/TeleportAbsolute</code> (поля и возвращаемое значение после ---)</p>
<p>Вызвать сервис: <code>rosservice call /turtle1/teleport_absolute</code> + 2 tab</p>

<h4>Создание пакета</h4>
<p>Создать папку: <code>mkdir -p workspace/src</code></p>
<p>Перейти в папку: <code>cd workspace/src</code></p>
<p>Создать ссылку на CMake-файл: <code>catkin_init_workspace</code> (вызывать из workspace/src)</p>
<p>Создать пакет: <code>catkin_create_pkg hello</code></p>
<p>Собрать пакет: <code>catkin_make</code> (вызвать из workspace)</p>
<p>Создать пакет для С++: <code>catkin_create_pkg talkers roscpp</code></p>
<p>Просмотр файла: <code>gedit talkers/package.xml</code></p>

<h4>Запуск ноды</h4>
<code>
	catkin_make
	roscore
	rosrun turtlesim turtlesim_node
	source devel/setup.bash // чтобы находить путь
	rosrun talkers publisher
</code>

<h4>Сообщения</h4>
<p>Просмотр всех сообщений: <code>rosmsg list</code></p>

<h4>Прочее</h4>
<p>Установить move_base: <code>sudo apt-get install ros-melodic-navigation</code></p>