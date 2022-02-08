/*
===========================================================================

  Copyright (c) 2022 LandSandBoat Dev Teams

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see http://www.gnu.org/licenses/

===========================================================================
*/

#include "application.h"
#include "settings_manager.h"
#include "debug.h"

#include <iostream>
#include <string>

Application::Application(std::unique_ptr<argparse::ArgumentParser>&& pArgParser)
: gArgParser(std::move(pArgParser))
{
    //debug::init();

    // logging::Init(this);
    // lua::Init(this);
    // settings::Init(this);
    // zmq::Init(this);
    // sql::Init(this);
    // debug::Init(this);
    // task::Init(this);

    std::cout << SettingsManager::Get<bool>(MainSettings::ENABLE_TOAU);

    //gSettings    = std::make_unique<SettingsService>(this);
    //gZMQ         = std::make_unique<ZMQService>(this);
    //gSQL         = std::make_unique<SQLService>(this);
    //gDebug       = std::make_unique<DebugService>(this);
    //gTaskManager = std::make_unique<TaskManager>(this);
}

bool Application::IsRunning()
{
    return bIsRunning;
}

void Application::Tick()
{
    // gZMQ->Tick();
    // gSQL->Tick();
    // gDebug->Tick();
    // gTaskManager->Tick();
}
