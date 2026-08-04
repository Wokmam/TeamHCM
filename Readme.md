<h1>Somos el Team Born To Win WRO Future Engineers</h1>
<h2>World Robot Olympiad (WRO)</h2>
<p align="center">
<img width="600" alt="{4F88DD0A-A459-4292-9581-5FD236E6E98C}" src="https://github.com/user-attachments/assets/9d2b5d73-df28-4905-b5f3-3db38d8a8192" />
</p>
<p></p>World Robot Olympiad™ es una competencia temática en donde equipos de niños y jóvenes entre 8 y 22 años de edad medirán sus conocimientos, aplicando soluciones a problemas del mundo real, utilizando la Metodología STEAM, de la mano de la robótica educativa.<p>
<p>Dentro de la WRO, la categoría Futuros Ingenieros destaca por su enfoque práctico y evolutivo. Su objetivo principal es conectar a los estudiantes con los retos reales de la industria a través de la automatización. Al exigir un pensamiento analítico, esta división moldea a los líderes tecnológicos del mañana, transformando el conocimiento teórico en innovación pura.<p>


El desafío central de este año se enfoca en la conducción autónoma. Diseñar un coche capaz de tomar decisiones por sí mismo lleva la robótica educativa al siguiente nivel, forzando a los participantes a dominar herramientas de última generación y aportando un nivel de ingeniería y dinamismo.





  <tr>    
    <td width="40%" align="center" valign="middle" bgcolor="#0d1117">
    <img width="300" alt="bb0c992e-8172-4063-9124-5125c4acf2e3 __CR0_0_300_300_PT0_SX300_V1___-removebg-preview" src="https://github.com/user-attachments/assets/d98996ff-f785-405b-802a-cbc001e01816" />
    </td>
    <td width="60%" valign="middle" bgcolor="#0d1117">
      <h3>Especificaciones:</h3>
      <ul>
        <li><strong>Tipo:</strong> Digital</li>
        <li><strong>Velocidad:</strong> 0.12 sec/60° (4.8V)</li>
        <li><strong>Torque:</strong> 1.8 kg-cm (4.8V)</li>
        <li><strong>Voltaje:</strong> 5V</li>
        <li><strong>Rango de Operación:</strong> 0°-180°</li>
      </ul>
    </td>
  </tr>



 <tr>    
    <td width="40%" align="center" valign="middle" bgcolor="#0d1117">
    <img width="500" alt="800x800-removebg-preview" src= /><img width="524" height="586" alt="puente h l290" src="https://github.com/user-attachments/assets/72785d27-0a95-4e2b-9ada-a176bd655cfc" />

  </td>
  <td width="60%" valign="middle" bgcolor="#0d1117">
  <h3>Especificaciones</h3>
      <ul>
        <li><strong>Voltaje de motores (VM):</strong> 5V - 35V</li>
        <li><strong>Voltaje lógico (VCC):</strong> 5V - 7V</li>
        <li><strong>Corriente de salida:</strong> 1.2A continuos (3.2A pico por canal)</li>
        <li><strong>Canales:</strong> Controla hasta 2 motores de DC o 1 motor paso a paso</li>
        <li><strong>Protecciones:</strong> Térmica integrada y diodos de proteción contra retorno de corriente</li>
      </ul>
    </td>
  </tr>

## 1. Arquitectura General del Sistema
El vehículo utiliza una configuración de **Tracción Trasera (RWD)** combinada con un sistema de **Dirección Delantera**. Esta disposición emula el comportamiento de un automóvil real.
<p align="center">
<img width="407" alt="aa" src="https://github.com/user-attachments/assets/1617e8e5-d2b2-4e00-866d-53f5e1a5e37c" />
</p>

## 2. Sistema de Tracción (Tren Trasero)

El tren trasero es el encargado de proveer el torque y velocidad necesarios para el desplazamiento del vehículo. Está compuesto por un motor principal y un mecanismo diferencial.

### 2.1. Actuador Principal: Motor DC con Encoder (600 RPM)
Para la propulsión se seleccionó un motor de corriente continua (DC) equipado con un encoder de cuadratura.
<table>
  <tr>    
    <td width="40%" align="center" valign="middle" bgcolor="#0d1117">
      <img width="250" alt="51+JncrV17L _SX522_-removebg-preview" src="https://github.com/user-attachments/assets/6a83c77a-f4a3-4415-80d0-be58ab4c0c7c" />
    </td>
    <td width="60%" valign="middle" bgcolor="#0d1117">
      <h3>Especificaciones:</h3>
      <ul>
        <li><strong>Voltaje Nominal:</strong> 12V</li>
        <li><strong>Velocidad:</strong> 600 RPM</li>
        <li><strong>Tipo de Encoder:</strong> Encoder de cuadratura (Efecto Hall) de fase A y B con 120 PPR en el eje de salida</li>
      </ul>
    </td>
  </tr>
</table>

* **Motivos de Selección:**
    * **Cálculo de Odometría:** El propósito fundamental del encoder es la odometría. Al contar los pulsos generados por las vueltas del motor, el firmware calcula con precisión cuántos centímetros ha avanzado el vehículo en la pista. Esto nos permite programar desplazamientos basados en distancias exactas.

### 2.2. Caja de Engranajes y Sistema Diferencial
La potencia del motor no va directo a las ruedas; pasa a través de una etapa de reducción y se distribuye mediante un diferencial mecánico.

<p align="center">
<img width="500" alt="WhatsApp Image 2026-06-25 at 2 18 30 PM" src="https://github.com/user-attachments/assets/fa271de6-48d6-460b-a5a0-76fb4603ecc5" />
</p>

* **Mecanismo Diferencial:** Se diseñó e implementó un diferencial de engranajes cónicos en el eje trasero.
* **Motivos de Selección e Implementación:**
    * **Impreso en 3D:** Todo el conjunto del mecanismo diferencial ha sido fabricado mediante impresión 3D utilizando filamento **PETG**. Se seleccionó este material debido a su alta resistencia al impacto y durabilidad superior frente al PLA.
    * **Rodamientos:** Para soportar el movimiento del diferencial, se integraron rodamientos. Estos ayudan a evitar atascos mecánicos, reducir la fricción y permitir un giro mucho más suave y eficiente del eje.
    * **Evitar derrapes:** En las curvas, la rueda interior recorre una distancia menor que la rueda exterior. Sin un diferencial, una de las ruedas se vería obligada a patinar, provocando pérdida de tracción y descalibración de la odometría basada en el encoder.

## 3. Sistema de Dirección (Tren Delantero)
En el sistema de dirección, la precisión es vital para que el robot no se desvíe de los ángulos deseados y mantenga trayectorias repetibles.
  
### 3.1. Actuador de Dirección: Servomotor
El control angular de las ruedas delanteras se realiza mediante un servomotor de alta precisión conectado a una geometría de dirección.

<table>
  <tr>    
    <td width="40%" align="center" valign="middle" bgcolor="#0d1117">
    <img width="250" alt="bb0c992e-8172-4063-9124-5125c4acf2e3 __CR0_0_300_300_PT0_SX300_V1___-removebg-preview" src="https://github.com/user-attachments/assets/d98996ff-f785-405b-802a-cbc001e01816" />
    </td>
    <td width="60%" valign="middle" bgcolor="#0d1117">
      <h3>Especificaciones:</h3>
      <ul>
        <li><strong>Tipo:</strong> Digital</li>
        <li><strong>Velocidad:</strong> 0.12 sec/60° (4.8V)</li>
        <li><strong>Torque:</strong> 1.8 kg-cm (4.8V)</li>
        <li><strong>Voltaje:</strong> 5V</li>
        <li><strong>Rango de Operación:</strong> 0°-180°</li>
      </ul>
    </td>
  </tr>
</table>

* **Motivos de Selección:**
    * **Control de Posición preciso:** A diferencia de un motor DC común, el servomotor permite definir un ángulo exacto.
    * **Tipo de servomotor:** Se seleccionó específicamente un servomotor con piñonería metálica en lugar de uno con engranajes de plástico. En pruebas previas, los componentes de plástico experimentaban un desgaste excesivo debido al estrés mecánico, lo que provocaba un aumento crítico en la temperatura del actuador y fallos por rotura de dientes. Los engranajes metálicos ofrecen la tolerancia al torque y la disipación térmica necesarias para soportar las exigencias.

### 3.2. Geometría de Dirección (Principio de Ackerman)
El varillaje mecánico de la dirección delantera está diseñado siguiendo geométricamente el principio de **Ackerman**.

<p align="center">
<img width="800" alt="vehicle-front" src= <img width="1280" height="960" alt="vehicle-front2" src="https://github.com/user-attachments/assets/1d4906d4-73df-4048-b55e-6b170eb6911e" />
>
</p>

* **Justificación Técnica:**
    * **Estructura Impresa en 3D:** Al igual que el tren trasero, las varillas y las manguetas de la dirección están fabricados totalmente mediante impresión 3D en **PETG**.
    * **Rodamientos en Ruedas Delanteras:** Para mejorar la fluidez del movimiento, se incorporaron rodamientos en ambas ruedas delanteras. Esto disminuye la fricción al rodar, asegurando que las llantas delanteras giren mucho mejor y respondan mejor a los cambios de dirección.

### 4. Diseño Estructural e Impresión 3D del Chasis
La plataforma base del robot fue diseñada en Fusion360 completamente a medida y fabricada en su totalidad mediante impresión 3D utilizando filamento PETG. lo que le otorga una alta resistencia a los impactos y durabilidad.

El diseño en 3D conecta directamente los soportes impresos en 3D 
para el portabaterías, la PCB principal y los sensores ultrasónicos. Toda la unión de estos soportes, componentes electrónicos y sensores al chasis se realiza mediante tornillos. Esto asegura una fijación firme que evita vibraciones o desajustes.

<p align="center">
<img width="500" alt="vehicle-botton" src="https://github.com/user-attachments/assets/e92f4ab7-8263-4b58-9d08-5a4cb3463061" />
</p>

<table>
  <thead>
    <tr>
      <th align="center">Dimensión</th>
      <th align="left">Valor (CM)</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td align="center" valign="middle">Largo</td>
      <td align="left" valign="middle">19,5</td>
      </td>
    </tr>
    <tr>
      <td align="center" valign="middle">Ancho</td>
      <td align="left" valign="middle">Eu mato vc seu fildo da puta</td>
      </td>
    </tr>
    <tr>
      <td align="center" valign="middle">Alto</td>
      <td align="left" valign="middle">10</td>
      </td>
    </tr>
  </tbody>
</table>

## 5. Sistema Electrónico y Sensores
Este apartado abarca la arquitectura electrónica del vehículo y los componentes seleccionados para la gestión de tareas y percepción del entorno.

<p align="center">
<img width="1455"alt="Esquema_conexiones" src="https://github.com/user-attachments/assets/79023e7e-85ce-4851-983c-809d8b3baa96" />
</p>

<hr style="border: none; border-top: 5px solid #30363d; margin: 20px 0;">

## Unidad de Procesamiento: Arduino Mega Pro Mini
Como placa de desarrollo seleccionamos el Arduino Mega Pro Mini, que se encarga de la lectura de sensores y la genereación de señales para los actuadores.

Se seleccionó esta variante específica debido a su de forma sumamente reducida en comparación con el Arduino Mega convencional, lo que permite integrarlo de manera eficiente en el chasis sin comprometer espacio ni añadir peso innecesario. A pesar de su tamaño compacto, conserva la totalidad de pines digitales y analógicos del microcontrolador ATmega2560, ofreciendo la conectividad necesaria para gestionar múltiples sensores y actuadores de forma simultánea. Asimismo, su diseño plano facilita soldarle pines header macho para conectarlo a pines header hembra conectaods en nuestra PCB personalizada, eliminando el uso de cables propensos a falsos contactos por las vibraciones del coche. Todo esto se complementa con una excelente relación costo-beneficio, asegurando un hardware potente, fiable y económico para el desarrollo del proyecto.

En la arquitectura de nuestro sistema, el Arduino Mega Pro Mini funciona como el cerebro del robot, procesando las entradas del sistema de visión ESP32-CAM, la IMU de 6 ejes MPU-6050 y tres sensores de Ultrasonidos HC-SR04, al tiempo que ejecuta algoritmos y genera salidas de control precisas para el controlador de motor y el ServoMotor.

<table>
  <tr>    
    <td width="40%" align="center" valign="middle" bgcolor="#0d1117">
    <img width="250" alt="ard-removebg-preview" src="https://github.com/user-attachments/assets/235a2521-f8ea-4248-92b4-568c62c36d8a" />
    </td>
    <td width="60%" valign="middle" bgcolor="#0d1117">
      <h3>Especificaciones:</h3>
      <ul>
        <li><strong>Microcontrolador:</strong> ATmega2560</li>
        <li><strong>Consumo mA:</strong> 20mA</li>
        <li><strong>Entradas Analógicas:</strong> 16</li>
        <li><strong>Pines Digitales E/S:</strong> 54 (de los cuales 15 son salidas PWM)</li>
        <li><strong>Voltaje de Operación:</strong> 5V</li>
      </ul>
    </td>
  </tr>
</table>

<hr style="border: none; border-top: 5px solid #30363d; margin: 20px 0;">

## 5.2. Sensores de Distancia: Ultrasonidos HC-SR04

El cálculo de las distancias hacia los límites de la pista se gestiona mediante un conjunto de sensores de ultrasonidos HC-SR04 ubicados de forma estratégica en la parte frontal del coche. Estos componentes operan emitiendo una ráfaga de ondas acústicas de alta frecuencia que viajan por el aire hasta reflejarse en las superficies fijas del entorno y regresar al receptor. A través del tiempo que tarda este eco en retornar, el microcontrolador calcula con gran precisión la distancia en centímetros hacia los muros.

<p align="center">
<img width="600" alt="Gemini_Generated_Image_czb582czb582czb5" src="https://github.com/user-attachments/assets/656e8cc0-6125-4428-8801-4a95f854b14d" />
</p>

En la lógica de navegación de nuestro coche, el sensor central se encarga de monitorizar el espacio libre al frente, lo que resulta crítico para identificar la aproximación hacia las paredes frontales de la pista. Por su parte, los dos sensores laterales evalúan la proximidad de los muros izquierdo y derecho. La integración conjunta de estas tres lecturas permite al firmware saber en qué salida se encuentra para ejecutar una ruta ya hecha. Al estar atornillados con firmeza en los soportes impresos en 3D que están puestos en el chasis, se garantiza que los ángulos de apertura inferiores a 15° se mantengan estables y libres de las vibraciones propias del motor.

<table>
  <tr>    
    <td width="40%" align="center" valign="middle" bgcolor="#0d1117">
      <img width="350" alt="descarga-removebg-preview (1)" src="https://github.com/user-attachments/assets/576ff9e5-195d-4699-92de-3f11234e40f7" />
    </td>
    <td width="60%" valign="middle" bgcolor="#0d1117">
      <h3>Especificaciones Técnicas:</h3>
      <ul>
        <li><strong>Voltaje de operación:</strong> 5V</li>
        <li><strong>Rango de medición:</strong> 2 cm a 400 cm</li>
        <li><strong>Precisión:</strong> ±3 mm</li>
        <li><strong>Ángulo de apertura:</strong> Menor a 15°</li>
        <li><strong>Corriente de trabajo:</strong> 15 mA</li>
      </ul>
    </td>
  </tr>
</table>

<hr style="border: none; border-top: 5px solid #30363d; margin: 20px 0;">

## 5.3. Unidad de Medición Inercial (IMU): MPU6050
La estabilidad angular y la orientación espacial del vehículo están reguladas por la unidad de medición inercial MPU6050. Este dispositivo integra un giroscopio de tres ejes y un acelerómetro de tres ejes en un único chip, permitiendo capturar con precisión los cambios de velocidad y las variaciones en la rotación del coche sobre la pista. La comunicación con el microcontrolador central se realiza de manera eficiente a través del protocolo I2C, lo que asegura una transmisión rápida de los datos inerciales recolectados en tiempo real.

<p align="center">
<img width="388" alt="images" src="https://github.com/user-attachments/assets/2137e394-29f6-440f-a4b2-29b5847cf309" />
</p>

La implementación de la IMU es fundamental para el sistema de navegación del vehículo, ya que cumple la función de corregir las desviaciones en la trayectoria recta. Aunque los encoders del motor miden los centímetros avanzados, factores físicos como el deslizamiento de las llantas o las imperfecciones del suelo pueden hacer que el carro pierda el rumbo. El MPU6050 monitorea constantemente el ángulo de guiñada (*yaw*), detectando cualquier giro involuntario y permitiendo que el firmware realice ajustes inmediatos en el servomotor de dirección para contrarrestar el desvío y mantener al robot alineado perfectamente con la pista.

<table>
  <tr>    
    <td width="40%" align="center" valign="middle" bgcolor="#0d1117">
      <img width="450" alt="mpu6050_3-axis_acceleration_gyroscope_6dof_module_2-removebg-preview" src="https://github.com/user-attachments/assets/c63aba94-bd8b-454a-886a-e9268a2cf3c5" />
    </td>
    <td width="60%" valign="middle" bgcolor="#0d1117">
      <h3>Especificaciones Técnicas:</h3>
      <ul>
        <li><strong>Voltaje de Operación:</strong> 3.3V - 5.0V</li>
        <li><strong>Grados de Libertad:</strong> 6 ejes (3 ejes acelerómetro, 3 ejes giroscopio)</li>
        <li><strong>Rango del Giroscopio:</strong> ±250, ±500, ±1000, ±2000 °/seg</li>
        <li><strong>Rango del Acelerómetro:</strong> ±2g, ±4g, ±8g, ±16g</li>
        <li><strong>Protocolo de Comunicación:</strong> I2C</li>
      </ul>
    </td>
  </tr>
</table>





<h2>🎯 Desafíos de la Competencia</h2>
<table align="center" width="100%">
  <tr>
    <td width="50%" align="center" valign="top" bgcolor="#0d1117">
      <br>
      <h3>🔗 Desafío Abierto</h3>
      <a href="https://youtu.be/Df2YxnnMeV0?si=AwDFZAtFiafpjhe3">
        <img width="100%" alt="Open Challenge Roun" src="https://img.youtube.com/vi/Df2YxnnMeV0/maxresdefault.jpg" />
      </a>
      <br><br>
      <a href="https://youtu.be/Df2YxnnMeV0?si=AwDFZAtFiafpjhe3">Ver Ronde de Desafío Abierta</a>
      <br><br>
      <p><i>Navegación autónoma mediante IMU y sensores de distancia para completar vueltas y estacionamiento de de forma precisa</i></p>
    </td>
    <td width="50%" align="center" valign="top" bgcolor="#0d1117">
      <br>
      <h3>🔗 Desafío de Obstaculos</h3>
      <a href="URL">
        <img width="100%" alt="Obstacle Challenge Round" src="URL" />
      </a>
      <br><br>
      <a href="URL">Ronda de Desafío Cerrada</a>
      <br><br>
      <p><i>Cumbia</i></p>
    </td>
  </tr>
</table>













<h2>Lista de Componentes</h2>

  
<table>
  <thead>
    <tr>
      <th align="center">Cantidad</th>
      <th align="left">Nombre</th>
      <th align="center">Foto</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td align="center" valign="middle">1</td>
      <td align="left" valign="middle">Arduino Mega Pro Mini</td>
      <td align="center">
        <img width="350" alt="ard-removebg-preview" src="https://github.com/user-attachments/assets/066d5348-7654-476c-9065-e70d8045de8d" />
      </td>
    </tr>
    <tr>
      <td align="center" valign="middle">1</td>
      <td align="left" valign="middle">MPU6050</td>
      <td align="center">
        <img width="300" alt="MPU6050" src="https://github.com/user-attachments/assets/85fb2310-4ff0-4bd1-a56f-6e161a458451" />
      </td>
    </tr>
    <tr>
      <td align="center" valign="middle">1</td>
      <td align="left" valign="middle">Puente H l298n</td>
      <td align="center">
        <img width="220" alt="l298n" src= "https://github.com/user-attachments/assets/acbdfb10-64ec-4dc8-bd1b-a453af3a34db" 
      </td>
    </tr>
         <td align="center" valign="middle">1</td>
      <td align="left" valign="middle">esp32cam</td>
      <td align="center">
        <img width="220" alt="esp32cam" src=  "https://github.com/user-attachments/assets/24724ab8-2df3-4dde-b2e7-aad3f378f28c" />
        </td>
      </tr>
   </tr>
        <td align="center" valign="middle">3</td>
      <td align="left" valign="middle">hc-sr04</td>
      <td align="center">
        <img width="220" alt="hc-sr04" src="https://github.com/user-attachments/assets/344ec42e-f23a-4cf3-90c8-152ebe28890f" />
        </td>
      </tr>
   </tr>
       <td align="center" valign="middle">1</td>
      <td align="left" valign="middle">motor dc con encoder</td>
      <td align="center">
        <img width="220" alt="l298n"src="https://github.com/user-attachments/assets/6a83c77a-f4a3-4415-80d0-be58ab4c0c7c"> 
      </td>
    </tr>
       <td align="center" valign="middle">1</td>
      <td align="left" valign="middle">mg90s</td>
      <td align="center">
        <img width="220" alt="mg90s"src="https://github.com/user-attachments/assets/9c685746-6f82-4dfc-9a0b-0c6e4c276a47" /> 
      </td>
    </tr>
       <td align="center" valign="middle">1</td>
      <td align="left" valign="middle">vaquelita perforada (15x9)</td>
      <td align="center">
        <img width="220" alt="vaquelita perforada grande" src="https://github.com/user-attachments/assets/b8ae29a6-8f06-4229-b878-d9a69a88dfa5">
      </td>
    </tr>
         <td align="center" valign="middle">1</td>
      <td align="left" valign="middle">led rojo</td>
      <td align="center">
        <img width="220" alt="led rojo"src="https://github.com/user-attachments/assets/89d3e0f7-017e-472f-aa86-18e87b00deb6" />
      </td>
    </tr>
          <td align="center" valign="middle">1</td>
      <td align="left" valign="middle">led azul</td>
      <td align="center">
        <img width="220" alt="led rojo"src="https://github.com/user-attachments/assets/82e8ffb4-12c1-4873-bf0c-a205bb54e91d" />
      </td>
    </tr>
           <td align="center" valign="middle">1</td>
      <td align="left" valign="middle">espadines macho</td>
      <td align="center">
        <img width="220" alt="espadines macho"src="https://github.com/user-attachments/assets/359afadf-10fe-47fc-93f8-a762a6ec4a2d" />
      </td>
    </tr>
             <td align="center" valign="middle">1</td>
      <td align="left" valign="middle">espadines hembras</td>
      <td align="center">
        <img width="220" alt="espadines hembras"src="https://github.com/user-attachments/assets/8d92ee3c-fa4f-477f-a81a-2cfbccbb0b0e" />
      </td>
    </tr>
  </tbody>
</table>
