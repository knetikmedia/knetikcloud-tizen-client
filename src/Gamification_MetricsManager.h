#ifndef _Gamification_MetricsManager_H_
#define _Gamification_MetricsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "MetricResource.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Gamification_Metrics Gamification_Metrics
 * \ingroup Operations
 *  @{
 */
class Gamification_MetricsManager {
public:
	Gamification_MetricsManager();
	virtual ~Gamification_MetricsManager();

/*! \brief Add a metric. *Synchronous*
 *
 * Post a new score/stat for an activity occurrence without ending the occurrence itself
 * \param metric The new metric
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addMetricSync(char * accessToken,
	MetricResource metric, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Add a metric. *Asynchronous*
 *
 * Post a new score/stat for an activity occurrence without ending the occurrence itself
 * \param metric The new metric
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addMetricAsync(char * accessToken,
	MetricResource metric, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Gamification_MetricsManager_H_ */
