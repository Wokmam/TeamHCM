<h1>Born To Win WRO Future Engineers team</h1>
<h2>World Robot Olympiad (WRO)</h2>
<img width="1100" height="900" alt="{4F88DD0A-A459-4292-9581-5FD236E6E98C}" src="https://github.com/user-attachments/assets/9d2b5d73-df28-4905-b5f3-3db38d8a8192" />
<p></p>World Robot Olympiad™ es una competencia temática en donde equipos de niños y jóvenes entre 8 y 22 años de edad medirán sus conocimientos, aplicando soluciones a problemas del mundo real, utilizando la Metodología STEAM, de la mano de la robótica educativa.<p>
<p>Dentro de la WRO, la categoría Futuros Ingenieros destaca por su enfoque práctico y evolutivo. Su objetivo principal es conectar a los estudiantes con los retos reales de la industria a través de la automatización. Al exigir un pensamiento analítico, esta división moldea a los líderes tecnológicos del mañana, transformando el conocimiento teórico en innovación pura.<p>


El desafío central de este año se enfoca en la conducción autónoma. Diseñar un coche capaz de tomar decisiones por sí mismo lleva la robótica educativa al siguiente nivel, forzando a los participantes a dominar herramientas de última generación y aportando un nivel de ingeniería y dinamismo.




<h3>Arduino Mega Pro Mini</h3>

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
    <img width="500" alt="800x800-removebg-preview" src="https://github.com/user-attachments/assets/c52b91e9-2577-4415-aa95-fe3ce67ffa2c" />
    </td>
    <td width="60%" valign="middle" bgcolor="#0d1117">
      <h3>Especificaciones</h3>
      <ul>
        <li><strong>Voltaje de motores (VM):</strong> 2.5V - 13.5V</li>
        <li><strong>Voltaje lógico (VCC):</strong> 2.7V - 5.5V</li>
        <li><strong>Corriente de salida:</strong> 1.2A continuos (3.2A pico por canal)</li>
        <li><strong>Canales:</strong> Controla hasta 2 motores de DC o 1 motor paso a paso</li>
        <li><strong>Protecciones:</strong> Térmica integrada y detección de bajo voltaje</li>
      </ul>
    </td>
  </tr>

  <tr>    
    <td width="40%" align="center" valign="middle" bgcolor="#0d1117">
    <img width="577" height="433" alt="mpu6050_3-axis_acceleration_gyroscope_6dof_module_2-removebg-preview" src="https://github.com/user-attachments/assets/c63aba94-bd8b-454a-886a-e9268a2cf3c5" />
    </td>
    <td width="60%" valign="middle" bgcolor="#0d1117">
      <h3>Especificaciones:</h3>
      <ul>
        <li><strong>Voltaje de operación:</strong> 3.3V - 5.0V</li>
        <li><strong>Grados de libertad:</strong> 6 ejes (3 ejes acelerómetro, 3 ejes giroscopio)</li>
        <li><strong>Rango del giroscopio:</strong> ±250, ±500, ±1000, ±2000 °/seg</li>
        <li><strong>Rango del acelerómetro:</strong> ±2g, ±4g, ±8g, ±16g</li>
        <li><strong>Protocolo de comunicación:</strong> I2C</li>
      </ul>
    </td>
  </tr>

  <tr>    
    <td width="40%" align="center" valign="middle" bgcolor="#0d1117">
      <img width="251" alt="descarga-removebg-preview (1)" src="https://github.com/user-attachments/assets/576ff9e5-195d-4699-92de-3f11234e40f7" />
    </td>
    <td width="60%" valign="middle" bgcolor="#0d1117">
      <h3>Especificaciones:</h3>
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









# 🏎️ Sistema de Movilidad y Tracción

Este módulo describe la arquitectura de locomoción del vehículo, detallando la implementación de la tracción trasera con diferencial y el sistema de dirección delantera Ackerman, así como los criterios de ingeniería utilizados para la selección de cada componente.

---

## 1. Arquitectura General del Sistema
El vehículo utiliza una configuración de **Tracción Trasera (RWD)** combinada con un sistema de **Dirección Delantera**. Esta disposición emula el comportamiento de un automóvil real, optimizando la estabilidad en línea recta y permitiendo una distribución de peso idónea para las curvas.
<p align="center">
<img width="407" alt="aa" src="https://github.com/user-attachments/assets/1617e8e5-d2b2-4e00-866d-53f5e1a5e37c" />
</p>
---

## 2. Sistema de Tracción (Tren Trasero)

El tren trasero es el encargado de proveer el par motor y la velocidad necesarios para el desplazamiento del vehículo. Está compuesto por un motor principal, un sistema de transmisión por engranajes y un mecanismo diferencial.

### 2.1. Actuador Principal: Motor DC con Encoder (600 RPM)
Para la propulsión se seleccionó un motor de corriente continua (DC) equipado con un encoder de cuadratura.

* **Especificaciones Clave:**
    * **Velocidad nominal:** 600 RPM (a voltaje nominal).
    * **Tipo de sensor:** Encoder de cuadratura (Efecto Hall).
* **Motivos de Selección:**
    * **Relación Velocidad/Torque Balanceada:** El motor ofrece una velocidad de 600rpm, manteniendo el torque suficiente para superar la inercia inicial sin saturar el consumo eléctrico.
 * **Cálculo de Odometría Lineal:** El propósito fundamental del encoder es la odometría. Al contar los pulsos generados por las vueltas del motor, el firmware calcula con precisión cuántos centímetros ha avanzado el vehículo en la pista. Esto nos permite programar desplazamientos basados en distancias exactas (por ejemplo: avanzar exactamente 100cm antes de iniciar el giro).

### 2.2. Caja de Engranajes y Sistema Diferencial
La potencia del motor no va directo a las ruedas; pasa a través de una etapa de reducción y se distribuye mediante un diferencial mecánico.

* **Mecanismo Diferencial:** Se diseñó e implementó un diferencial de engranajes cónicos en el eje trasero.
* **Motivos de Selección e Implementación:**
    * **Dinámica de Giro (Evitar Derrapes):** En las curvas de la WRO, la rueda interior recorre una distancia menor que la rueda exterior. Sin un diferencial (eje rígido), una de las ruedas se vería obligada a patinar, provocando pérdida de tracción, un aumento drástico en el consumo de corriente y descalibración de la odometría basada en el encoder.
    * **Preservación de la Odometría:** Al permitir que las ruedas giren a velocidades distintas de forma natural, las lecturas del encoder (si está posicionado antes del diferencial o promediando ambas ruedas) reflejan con mayor precisión el desplazamiento real del centro de masa del robot.
    * **Caja de Engranajes (Gearbox):** Ajusta la relación de transmisión final para adaptar las 600 RPM del motor al diámetro específico de nuestras ruedas, asegurando que el motor trabaje en su zona de máxima eficiencia (alrededor del 50-70% de su velocidad de vacío).

---

## 3. Sistema de Dirección (Tren Delantero)

La precisión en el direccionamiento es fundamental para que el robot esquive los obstáculos (pilares verdes y rojos) de forma consistente.

### 3.1. Actuador de Dirección: Servomotor
El control angular de las ruedas delanteras se realiza mediante un servomotor de alta precisión conectado a una geometría de dirección.

* **Motivos de Selección:**
    * **Control de Posición Absoluto:** A diferencia de un motor DC común, el servomotor permite definir un ángulo exacto (por ejemplo, 95° para ir recto, 115° para girar a la derecha) mediante señales PWM, eliminando la necesidad de sensores de fin de carrera o calibraciones complejas al inicio de la ronda.
    * **Torque de Retención:** Cuando el robot avanza a alta velocidad, las irregularidades de la pista o la fricción tienden a desviar las ruedas delanteras. El servomotor posee el torque suficiente para mantener firmemente la posición angular deseada.

### 3.2. Geometría de Dirección (Principio de Ackerman)
El varillaje mecánico de la dirección delantera está diseñado siguiendo geométricamente el principio de **Ackerman**.

* **Justificación Técnica:**
    * Este sistema asegura que, al girar, la rueda delantera interna rote un ángulo ligeramente mayor que la rueda delantera externa. Esto se debe a que ambas ruedas deben pivotar respecto al mismo centro de rotación instantáneo (compartido con el eje trasero). 
    * Al implementar Ackerman, se reduce casi a cero el deslizamiento lateral (*slip*) de los neumáticos delanteros, permitiendo giros limpios, predecibles y cerrados en las esquinas del circuito.

---

## 4. Matriz de Justificación de Componentes (Resumen para Jueces)

| Componente | Función | Alternativa evaluada | ¿Por qué se eligió? |
| :--- | :--- | :--- | :--- |
| **Motor DC 600 RPM** | Propulsión principal | Motor DC de 1000 RPM | El de 1000 RPM sacrificaba demasiado par motor (torque), dificultando las aceleraciones rápidas tras frenar en curvas cerradas. |
| **Encoder Integrado** | Retroalimentación de velocidad | Sensor óptico en llanta | Mayor resolución por revolución, protegido contra interferencias de luz ambiental de la pista y menor complejidad mecánica. |
| **Diferencial Mecánico** | Distribución de par en eje trasero | Eje rígido (Spool) | El eje rígido causaba subgiro (*understeer*) severo, haciendo que el robot chocara contra las paredes al intentar giros de 90 grados. |
| **Servomotor** | Control de dirección | Motor DC + Cremallera | El servomotor simplifica el software gracias a su bucle de control interno de posición y ofrece un retorno exacto al centro (0°). |
| **Geometría Ackerman** | Mecanismo de dirección | Dirección paralela simple | Evita el arrastre de los neumáticos delanteros, maximizando el agarre y la repetibilidad de las trayectorias autónomas. |
