#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <iostream>

#include <ssc/sscapi.h>

#include "SAM_api.h"
#include "ErrorHandler.h"
#include "SAM_Grid.h"

SAM_EXPORT SAM_Grid SAM_Grid_construct(const char* def, SAM_error* err){
	SAM_Grid result = nullptr;
	translateExceptions(err, [&]{
		result = ssc_data_create();
	});
	return result;
}

SAM_EXPORT int SAM_Grid_execute(SAM_Grid data, int verbosity, SAM_error* err){
	int n_err = 0;
	translateExceptions(err, [&]{
		n_err += SAM_module_exec("grid", data, verbosity, err);
	});
	return n_err;
}


SAM_EXPORT void SAM_Grid_destruct(SAM_Grid system)
{
	ssc_data_free(system);
}

SAM_EXPORT void SAM_Grid_Lifetime_analysis_period_nset(SAM_Grid ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "analysis_period", number);
	});
}

SAM_EXPORT void SAM_Grid_Lifetime_system_use_lifetime_output_nset(SAM_Grid ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_use_lifetime_output", number);
	});
}

SAM_EXPORT void SAM_Grid_Common_enable_interconnection_limit_nset(SAM_Grid ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "enable_interconnection_limit", number);
	});
}

SAM_EXPORT void SAM_Grid_Common_gen_aset(SAM_Grid ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "gen", arr, length);
	});
}

SAM_EXPORT void SAM_Grid_Common_grid_interconnection_limit_kwac_nset(SAM_Grid ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "grid_interconnection_limit_kwac", number);
	});
}

SAM_EXPORT void SAM_Grid_Common_load_aset(SAM_Grid ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "load", arr, length);
	});
}

SAM_EXPORT double SAM_Grid_Lifetime_analysis_period_nget(SAM_Grid ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "analysis_period", &result))
		make_access_error("SAM_Grid", "analysis_period");
	});
	return result;
}



SAM_EXPORT double SAM_Grid_Lifetime_system_use_lifetime_output_nget(SAM_Grid ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_use_lifetime_output", &result))
		make_access_error("SAM_Grid", "system_use_lifetime_output");
	});
	return result;
}



SAM_EXPORT double SAM_Grid_Common_enable_interconnection_limit_nget(SAM_Grid ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "enable_interconnection_limit", &result))
		make_access_error("SAM_Grid", "enable_interconnection_limit");
	});
	return result;
}



SAM_EXPORT double* SAM_Grid_Common_gen_aget(SAM_Grid ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "gen", length);
	if (!result)
		make_access_error("SAM_Grid", "gen");
	});
	return result;
}



SAM_EXPORT double SAM_Grid_Common_grid_interconnection_limit_kwac_nget(SAM_Grid ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "grid_interconnection_limit_kwac", &result))
		make_access_error("SAM_Grid", "grid_interconnection_limit_kwac");
	});
	return result;
}



SAM_EXPORT double* SAM_Grid_Common_load_aget(SAM_Grid ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "load", length);
	if (!result)
		make_access_error("SAM_Grid", "load");
	});
	return result;
}



SAM_EXPORT double SAM_Grid_Outputs_annual_ac_interconnect_loss_kwh_nget(SAM_Grid ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_interconnect_loss_kwh", &result))
		make_access_error("SAM_Grid", "annual_ac_interconnect_loss_kwh");
	});
	return result;
}



SAM_EXPORT double SAM_Grid_Outputs_annual_ac_interconnect_loss_percent_nget(SAM_Grid ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_ac_interconnect_loss_percent", &result))
		make_access_error("SAM_Grid", "annual_ac_interconnect_loss_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Grid_Outputs_annual_energy_nget(SAM_Grid ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_energy", &result))
		make_access_error("SAM_Grid", "annual_energy");
	});
	return result;
}



SAM_EXPORT double SAM_Grid_Outputs_annual_energy_pre_interconnect_ac_nget(SAM_Grid ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_energy_pre_interconnect_ac", &result))
		make_access_error("SAM_Grid", "annual_energy_pre_interconnect_ac");
	});
	return result;
}



SAM_EXPORT double SAM_Grid_Outputs_capacity_factor_interconnect_ac_nget(SAM_Grid ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "capacity_factor_interconnect_ac", &result))
		make_access_error("SAM_Grid", "capacity_factor_interconnect_ac");
	});
	return result;
}



SAM_EXPORT double* SAM_Grid_Outputs_gen_aget(SAM_Grid ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "gen", length);
	if (!result)
		make_access_error("SAM_Grid", "gen");
	});
	return result;
}



SAM_EXPORT double* SAM_Grid_Outputs_system_pre_interconnect_kwac_aget(SAM_Grid ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "system_pre_interconnect_kwac", length);
	if (!result)
		make_access_error("SAM_Grid", "system_pre_interconnect_kwac");
	});
	return result;
}



