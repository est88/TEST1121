// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc/TimedRobot.h>
#include <frc2/command/Command.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc2/command/CommandScheduler.h>
#include "subsystems/ExampleSubsystem.h"
#include <ctre/phoenix/motorcontrol/can/VictorSPX.h>
#include <ctre/phoenix/motorcontrol/GroupMotorControllers.h>
#include <frc/PWMSpeedController.h>
#include <ctre/phoenix/motorcontrol/IFollower.h>
#include <ctre/phoenix/motorcontrol/ControlMode.h>
#include <frc/Joystick.h>

using namespace ctre::phoenix::motorcontrol::can;
using namespace ctre::phoenix::motorcontrol;
using namespace frc;

#include "RobotContainer.h"

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

  Joystick stick = Joystick{0};

  VictorSPX left1 = VictorSPX{0};
  VictorSPX left2 = VictorSPX{1};
  VictorSPX right1 = VictorSPX{2};
  VictorSPX right2 = VictorSPX{3};

private:
  // Have it null by default so that if testing teleop it
  // doesn't have undefined behavior and potentially crash.
  frc2::Command* m_autonomousCommand = nullptr;

  RobotContainer m_container;
};
