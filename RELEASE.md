# Release 9.0

Apollo Open Source Platform 9.0 further focuses on enhancing the development and debugging experience, dedicated to provide autonomous driving developers with a unified development tool platform and easy-to-extend PnC and perception software framework interfaces. The new version reshapes the PnC and perception extension development method based on package management. It optimizes component splitting and configuration management according to business logic, simplifying the process of calling. In addition to the component extension method, a more lightweight plugin extension method has been added, simplifying the process of extending. The new version introduces Dreamview Plus, a brand-new developer tool that introduces modes for convenient multi-scenario use, a panel layout customizing visualization, and a resource center providing richer development resources. Furthermore, the LiDAR and Camera detection models in the new version have been upgraded for improved results, and incremental training methods have been opened up for easy extension. At the same time, support for 4D millimeter-wave radar has been added. Finally, the new version is adapted to the ARM architecture, and supports compilation and running on Orin, providing developers with additional device options.

## Major New Features and Improvements:

PnC Extension Development Pattern Based On Package Management

- Unified external interfaces to decouple the operation layer and PNC module.
- A brand-new plugin extension method to facilitate developers in developing and deploying their functionality.
- Global parameters and local parameters are divided to allow developers to query and modify parameters.

Perception Extension Development Pattern Based On Package Management

- Re-split the perception components based on "functional" granularity to facilitate reuse.
- A brand-new plugin development mode to facilitate the replacement of algorithms under the existing perception pipeline.
- Simplified and unified configuration to allow developers to query and modify parameters at any time.

Brand New Dreamview Plus Developer Tool

- Organize the usage scenarios of the development tool based on "mode", such as Perception mode, PnC mode, and Vehicle Test mode.
- Encapsulate each visualization functionality into an independent panel and support developers to customize the panel.
- Provide various resources such as maps, scenarios, vehicle configurations, and data records in the resource center to facilitate development and debugging.

Fully Upgraded Perception Model to Support Incremental Training

- CenterPoint is adopted to replace CNNSeg model by default in the LiDAR perception pipeline and YOLOX+YOLO3D is adopted to replace the original YOLO model by default in the Camera perception pipeline.
- Provide incremental training to improve perception model capabilities in specific scenarios by using a small amount of annotated data and Apollo pre-trained models.
- Support 4D millimeter-wave radar from hardware driver to perception model layer.

**[Note]** All models and methodologies included in Apollo 9.0 are for research purposes only. Productized and commercialized uses of these models are **NOT** encouraged, and it is at your own risk. Please be cautious to try Apollo 9.0 with sufficient safety protection mechanisms in place. Your feedback is highly appreciated so that we can continuously improve the models.

# Release 8.0

Apollo 8.0 is an effort to provide an extensible software framework and complete development cycle for Autonomous Driving developer. Apollo 8.0 introduces easily-reused Package to organize software modules. Apollo 8.0 integrates the whole process of perception development ,by combining model training service, model deployment tool and end-to-end visual validation tool . And another 3 new deep learning models are incorporated in Apollo 8.0 for perception module. Simulation service is upgraded by integrating local simulator in Dreamview to provide powerful debug tool for PnC developer.

## Major Features and Improvements

- Reusable software Package
  - Reorganize the modules based on Package to provide the functionality in an easy-to-consume manner
  - Fast installation experience based on Package, refer to [Installation - Package Method](docs/01_Installation%20Instructions/apollo_software_installation_guide_package_method.md)
  - Support customizing , publishing and sharing Package
- Brand New Deep Learning Models
  - CenterPoint, center-based two-stage 3D obstacle detection model
  - CaDDN, camera obstacle detection model
  - BEV PETR, camera obstacle detection model
- Complete Perception Development Process
  - Support Paddle3D to provide Model Training service
  - Provide model deployment tool by normalizing the model meta.
  - Provide visual validation tool in Dreamview
- Upgraded PnC Simulation Service
  - Provide PnC debug tool by integrating local simulator in Dreamview
  - Support scenario editing online and download in Dreamview

**[Note]** All models and methodologies included in Apollo 8.0 are for research purposes only. Productized and commercial uses of these models are NOT encouraged, and it is at your own risk. Please be cautious to try Apollo 8.0 with enough safety protection mechanism. Your feedback is highly appreciated for us to continuously improve the models.

# Release 7.0

Apollo 7.0 incorporates 3 brand new deep learning models to enhance the capabilities for Apollo Perception and Prediction modules. Apollo Studio is introduced in this version, combining with Data Pipeline, to provide a one-stop online development platform to better serve Apollo developers. Apollo 7.0 also publishes the PnC reinforcement learning model training and simulation evaluation service based on previous simulation service.

## Major Features and Improvements

- Brand New Deep Learning Models
  - Mask-Pillars obstacle detection model based on PointPillars
  - Inter-TNT prediction model based on interactive prediction & planning evaluator
  - Camera obstacle detection model based on SMOKE
- Apollo Studio Services
  - Practice environment service
  - Vehicle management service
- PnC Reinforcement Learning Services
  - Smart training and evaluation close-loop service
  - Extension Interface
- Upgraded Perception Module Code Structure

**[Note]** All models and methodologies included in Apollo 7.0 are for research purposes only. Productized and commercial uses of these models are **NOT** encouraged, and it is at your own risk. Please be cautious to try Apollo 7.0 with enough safety protection mechanism. Your feedback is highly appreciated for us to continuously improve the models.

# Release 6.0

Apollo 6.0 incorporates new deep learning models to enhance the capabilities for certain Apollo modules. This version works seamlessly with new additions of data pipeline services to better serve Apollo developers. Apollo 6.0 is also the first version to integrate certain features as a demonstration of our continuous exploration and experimentation efforts towards driverless technology.

## Major Features and Improvements

- Upgraded Deep Learning Models
  - PointPillars based obstacle detection model
  - Semantic map based pedestrian prediction model
  - Learning based trajectory planning model
- Brand New Data Pipeline Services
  - Low speed obstacle prediction model training service with semantic map support
  - PointPillars based obstacle detection model training service
  - Control profiling service
  - Vehicle dynamic model training service
  - Open space planner profiling service
  - Complete control parameter auto-tune service
- Driverless Research
  - Remote control interface with DreamView integration
  - Audio based emergency vehicle detection system

**[Note]** All models and methodologies included in Apollo 6.0 are for research purposes only. Productized and commercial uses of these models are **NOT** encouraged, and it is at your own risk. Please be cautious to try Apollo 6.0 with enough safety protection mechanism. Your feedback is highly appreciated for us to continuously improve the models.

# Release 5.5

Apollo 5.5 enhances the complex urban road autonomous driving capabilities of previous Apollo releases, by introducing curb-to-curb driving support. With this new addition, Apollo is now a leap closer to fully autonomous urban road driving. The car has complete 360-degree visibility, along with upgraded perception deep learning model a brand new prediction model to handle the changing conditions of complex road and junction scenarios, making the car more secure and aware. New Planning scenarios have been introduced to support curb-side functionality.

## Major Features And Improvements

- Brand new Data Pipeline Service
  - Sensor Calibration service
- Brand new module - Storytelling
- Scenario - Based Planning with a new planning scenarios to support curb-to-curb driving
  - Park-and-go
  - Emergency
- Prediction Model - Caution Obstacle
  - Semantic LSTM evaluator
  - Extrapolation predictor
- Control module
  - Model Reference Adaptive Control (MRAC)
  - Control profiling service
- Simulation scenarios

## Autonomous Drive Capabilities

Vehicles with this version can drive autonomously in complex urban road conditions including both residential and downtown areas. **BE CAUTIOUS WHEN DRIVING AUTONOMOUSLY, ESPECIALLY AT NIGHT OR IN POOR VISION ENVIRONMENT. URBAN DRIVING INVOLVES NAVIGATING HIGH RISK ZONES LIKE SCHOOLS, PLEASE TEST APOLLO 5.0 WITH THE SUPPORT FROM APOLLO ENGINEERING TEAM, PLEASE AVOID DRIVING THE VEHICLE ON THE HIGHWAY OR AT SPEEDS THAT ARE ABOVE OUR SUPPORTED THRESHOLD**.

# Release 5.0

Apollo 5.0 is an effort to support volume production for Geo-Fenced Autonomous Driving. The car now has 360-degree visibility, along with upgraded perception deep learning model to handle the changing conditions of complex road scenarios, making the car more secure and aware. Scenario-based planning has been enhanced to support additional scenarios like pull over and crossing bare intersections.

## Major Features And Improvements

- Brand new Data Pipeline Service
  - Vehicle Calibration
- New Perception algorithms
- Sensor Calibration Service
- Scenario - Based Planning with a new planning algorithm, Open Space Planner and new scenarios supported
  - Intersection - STOP Sign, Traffic Light, Bare Intersection
  - Park - Valet, Pull Over
- Map Data Verification tool
- Prediction Evaluators
- Simulation web platform - Dreamland
  - Scenario Editor
  - Control-in-loop Simulation
- Apollo Synthetic Data Set

## Autonomous Drive Capabilities

Vehicles with this version can drive autonomously in complex urban road conditions including both residential and downtown areas. **BE CAUTIOUS WHEN DRIVING AUTONOMOUSLY, ESPECIALLY AT NIGHT OR IN POOR VISION ENVIRONMENT. URBAN DRIVING INVOLVES NAVIGATING HIGH RISK ZONES LIKE SCHOOLS, PLEASE TEST APOLLO 5.0 WITH THE SUPPORT FROM APOLLO ENGINEERING TEAM, PLEASE AVOID DRIVING THE VEHICLE ON THE HIGHWAY OR AT SPEEDS THAT ARE ABOVE OUR SUPPORTED THRESHOLD**.

# Release 3.5

Apollo 3.5 is capable of navigating through complex driving scenarios such as residential and downtown areas. With 360-degree visibility and upgraded perception algorithms to handle the changing conditions of urban roads, the car is more secure and aware.

## Major Features And Improvements

- Upgraded Sensor Suite
  - VLS - 128 Line LiDAR
  - FPD-Link Cameras
  - Continental high-range function radars
  - Apollo Expansion Unit (AXU)
  - Additional IPC
- Brand new Runtime Framework - **Apollo CyberRT** which is specifically targeted towards autonomous driving
- New Perception algorithms
- Scenario - Based Planning with a new planning algorithm, Open Space Planner
- New Localization algorithm
- V2X Capabilities
- Open Vehicle Certification platform - 2 new vehicles added **GAC GE3** and **GWM WEY VV6**

## Autonomous Drive Capabilities

Vehicles with this version can drive autonomously in complex urban road conditions including both residential and downtown areas. **BE CAUTIOUS WHEN DRIVING AUTONOMOUSLY, ESPECIALLY AT NIGHT OR IN POOR VISION ENVIRONMENT. URBAN DRIVING INVOLVES NAVIGATING HIGH RISK ZONES LIKE SCHOOLS, PLEASE TEST APOLLO 3.5 WITH THE SUPPORT FROM APOLLO ENGINEERING TEAM**.

# Release 3.0

Apollo 3.0 enables L4 product level solution that allows vehicles to drive in a closed venue setting at a low speed. Automakers can now leverage this one stop solution for autonomous driving without having to customize on their own.

## Major Features And Improvements

- New Safety module called Guardian
- Enhanced Surveillance module - Monitor
- Hardware service layer that will now act like a platform and not a product, giving developers the flexibility to integrate their own Hardware
- Apollo Sensor Unit (ASU)
- New Gatekeeper - Ultrasonic Sensor
- Perception module changes:
  - **CIPV(Closest In-Path Vehicle) detection and Tailgating**: The vehicle in front of the ego-car is detected and its trajectory is estimated for more efficient tailgating and lane keeping when lane detection is unreliable.
  - **Asynchronous sensor fusion**: unlike the previous version, Perception in Apollo 3.0 is capable of consolidating all the information and data points by asynchronously fusing LiDAR, Radar and Camera data. Such conditions allow for more comprehensive data capture and reflect more practical sensor environments.
  - **Online pose estimation**: This new feature estimates the pose of an ego-vehicle for every single frame. This feature helps to drive through bumps or slopes on the road with more accurate 3D scene understanding.
  - **Ultrasonic sensors**: Perception in Apollo 3.0 now works with ultrasonic sensors. The output can be used for Automated Emergency Brake (AEB) and vertical/perpendicular parking.
  - **Whole lane line**: Unlike previous lane line segments, this whole lane line feature will provide more accurate and long range detection of lane lines.
  - **Visual localization**: Cameras are currently being tested to aid and enhance localization
  - **16 beam LiDAR support**

## Autonomous Driving Capabilities

Vehicles with this version can drive autonomously in a Closed Venue setting. It is a production ready version for low-speed autonomous driving capabilities.

# Release 2.5

This release allows the vehicle to autonomously run on geo-fenced highways. Vehicles are able to do lane keeping cruise and avoid collisions with the leading vehicles.

## Major Features And Improvements

- Upgrade localization based on multiple sensor fusion (MSF)
- Upgrade DreamView with more visualization features
- Add HD map data collection tool
- Add vision based perception with obstacle and lane mark detections
- Add relative map to support ACC and lane keeping for planning and control
- Make docker file available

## Autonomous Drive Capabilities

Vehicles with this version can drive autonomously on highways at higher speed with limited HD map support. The highway needs to have clear white painted lane marks with minimum curvatures. The performance of vision based perception will degrade significantly at night or with strong light flares. **BE CAUTIOUS WHEN DRIVING AUTONOMOUSLY, ESPECIALLY AT NIGHT OR IN POOR VISION ENVIRONMENT. PLEASE TEST APOLLO 2.5 WITH THE SUPPORT FROM APOLLO ENGINEERING TEAM**.

# Release 2.0

This release supports that vehicles autonomously drive on simple urban roads. Vehicles are able to cruise and avoid collisions with obstacles, stop at traffic lights and change lanes if needed to reach the destination.

## Major Features And Improvements

- Add traffic light detection
- Add obstacle classification and support obstacle categories: _vehicle_, _pedestrian_, _cyclist_ and _unknown_
- Upgrade planning capability to change lanes in order to reach the destination
- Add point cloud based localization algorithm fusion with RTK
- Add MPC based control algorithm
- Add RNN model for traffic prediction
- Integrate HMI and DreamView
- Redesign DreamView and upgrade it with additional debugging visualization tools
- Add additional debugging tools in `modules/tools`
- Add release docker image upgrade through secure OTA
- Add USB camera and radar driver support

## Autonomous Driving Capabilities

Vehicles with this version can drive autonomously on simple urban roads with light to medium traffic at slow to medium speed.

# Release 1.5

This release supports that vehicles autonomously cruise on fixed lanes.

## Major Features And Improvements

- Add routing, perception, prediction, planning and end-to-end
  - **_Perception_**: 3D point cloud based obstacle detection and tracking with GPU support
  - **_Prediction_**: Deep neural network MLP prediction model and multiple predictors handling different categories of obstacles
  - **_Planning_**: traffic law modules, multiple iterations of DP and QP optimizations for path and speed
  - **_End-to-end_**: Mixed deep neural network models with convolutional LSTM in longitudinal and FCNN in lateral
- Add HD Map engine APIs
- Add Velodyne 64 LiDAR driver support
- Add debugging tools in `modules/tools/`
- Improve HMI and DreamView features to allow realtime traffic display and traffic scenario replay.

## Autonomous Driving Capabilities

Vehicles with this version do **NOT** detect traffic lights. Vehicles will **NOT** stop at red traffic lights. Neither will they change lanes on the road.

# Release 1.0

Initial release of Apollo implements autonomous GPS waypoint following.

## Major Features And Improvements

- Include localization, control
  - **_Location_**: RTK
  - **_Control_**: calibration table in longitudinal and LQR in lateral
- Add GPS/IMU gnss driver support
- Use HMI to record and replay a trajectory, and DreamView to visualize vehicle trajectory
- Include debugging tools in `modules/tools/`

## Autonomous Driving Capabilities

Vehicles with this version do **NOT** perceive obstacles in close promixity. Neither can they drive on public roads or areas without GPS signals.
