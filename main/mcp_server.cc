#include "mcp_server.h"
#include <esp_app_desc.h>
#include <esp_bt.h>
#include <esp_log.h>
#include <esp_pthread.h>
#include <algorithm>
#include <cstring>
#include <iterator>
#include <optional>

#include "application.h"
#include "board.h"
#include "display.h"
#include "lvgl_image.h"
#include "lvgl_theme.h"
#include "settings.h"
