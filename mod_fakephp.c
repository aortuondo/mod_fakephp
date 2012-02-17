#include "apr_strings.h"
#include "http_core.h"
#include "http_config.h"

/* 
 * Global module structure 
 */
module AP_MODULE_DECLARE_DATA fakephp_module;

/* 
 * Config action routine 
 */

static const char *fakephp_action (cmd_parms *cmd, void *mconfig, const char *pch)
{
    return NULL;
}

/*
 * List of directives specific to our module
 */
static const command_rec fakephp_cmds[] =
{
	AP_INIT_TAKE2("php_flag", fakephp_action, NULL, OR_OPTIONS, ""), 
	AP_INIT_TAKE2("php_value", fakephp_action, NULL, OR_OPTIONS, ""),
	{NULL}
};

/*
 * Module definition for configuration
 */
module AP_MODULE_DECLARE_DATA fakephp_module =
{
	STANDARD20_MODULE_STUFF,
	NULL, 
	NULL,
	NULL,
	NULL,
	fakephp_cmds,
	NULL
};

