/*
 * SamiCollection«Country».h
 * 
 * 
 */

#ifndef SamiCollection«Country»_H_
#define SamiCollection«Country»_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;




namespace Swagger {

class SamiCollection«Country»: public SamiObject {
public:
    SamiCollection«Country»();
    SamiCollection«Country»(String* json);
    virtual ~SamiCollection«Country»();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCollection«Country»* fromJson(String* obj);


private:
    };

} /* namespace Swagger */

#endif /* SamiCollection«Country»_H_ */
