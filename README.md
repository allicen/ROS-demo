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
<p>Создать пакет сразу с зависимостями <code>catkin_create_pkg my_service message_generation message_runtime</code></p>

<h4>Запуск ноды</h4>
<pre>
	catkin_make
	roscore
	rosrun turtlesim turtlesim_node
	source devel/setup.bash // чтобы находить путь
	rosrun talkers publisher
</pre>

<h4>Сообщения</h4>
<p>Просмотр всех сообщений: <code>rosmsg list</code></p>
<p>Свои сообщения сохранять в папке <code>msg</code> внутри пакета</p>

<h4>Создание сервиса</h4>
<p>Все сервисы располагаются внутри пакета в папке <code>srv</code></p>
<p>Просмотр сервиса <code>rossrv show my_service/AddInts</code> (AddInts - название сервиса)</p>
<p>Команда <code>rossrv</code> работает с типами. <code>rossrv list</code> выведет все сервисы, которые есть в ROS</p>
<p>Команда <code>service list</code> выводит сервисы, которые используются в данный момент эмуляции.</p>
<p>Вызвать сервис <code>rosservice call /add_two_ints "first: 10 second: 52"</code> (add_two_ints - функция, в кавычувх шаблонные поля)</p>

<h4>rViz</h4>
<p>Запустить ноду <code>rosrun rviz rviz</code></p>
<p>Shift+мышь - перемещение вверх/вниз</p>

<h4>Launch-файл</h4>
<p>Указываются ноды, которые будут запущены.</p>
<p>Пример файла:</p>
<pre>
&lt;launch&gt;
   &lt;node pkg="turtlesim" type="turtlesim_node" name="turtle" /&gt;
   &lt;node pkg="turtlesim" type="turtle_teleop_key" name="teleop" /&gt;
&lt;/launch&gt;
</pre>
<p>Автоматически запускает roscore.</p>

<h4>Пакет преобразований TF</h4>
<p>Преобразует координаты одного объекта в координаты другого</p>

<h4>Arduino и ROS</h4>
<p><a href="http://wiki.ros.org/rosserial_arduino/Tutorials">Документация</a></p>
<p><strong>Установка rosserial:</strong></p>
<p>1. <code> sudo apt-get install ros-melodic-rosserial-arduino</code></p>
<p>2. <code>sudo apt-get install ros-melodic-rosserial</code></p>
<p>В папку src <code>git clone https://github.com/ros-drivers/rosserial</code></p>
<p>В папке workspace собрать пакеты (<code>catkin_make</code> или <code>catkin_make_isoleted</code>)</p>
<p>Перейти в библиотеку <code>cd ~/***/libraries</code>(*** - название пакета) и выполнить команды 
<code>rm -rf ros_lib</code> и <code>rosrun rosserial_arduino make_libraries.py /sketchbook/libraries</code> (в папке 
<code>libraries</code> должна создаться папка <code>ros_lib</code>)</p>
<p>Дать доступ к портам: <code>sudo usermod -a -G dialout user</code> (user - имя пользователя)</p>
<p>Посмотреть порты: <code>S -l /dev/ttyACM*</code> или <code>S -l /dev/ttyUSB*</code></p>
<p><strong>Запуск:</strong></p>
<p>В 1 терминале запускаем ROS <code>roscore</code></p> 
<p>Во 2 терминале запускаем <code>rosrun rosserial_python serial_node.py _port:=/dev/ttyACM0</code> (ttyACM0 порт) или 
<code>rosrun rosserial_python serial_node.py _port:=/dev/ttyUSB0 rosrun rosserial_arduino make_libraries.py_baud:=57600</code></p>
<p>В 3 терминале работаем (например, проверяем, список топиков <code>rostopic list</code>) и выводим сообщения из топика 
<code>rostopic echo chatter</code> и строим rqt-граф <code>rqt_graph</code></p>
<p>Пример программы можно взять из примеров для <code>ros_lib</code></p>

<h4>Прочее</h4>
<p>Установить move_base: <code>sudo apt-get install ros-melodic-navigation</code></p>
<p>Вызвать шаблон - двойной Tab</p>