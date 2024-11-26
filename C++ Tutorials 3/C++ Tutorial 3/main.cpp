#include <iostream> //for cout/endl etc.
#include <cstdlib>  //c++ version of stdlib - for exit. 
#include <ctime>    //need to seed rand

#include "Vector2f.h"
#include "Colour.h"
#include "PlayerShip.h"
#include "PowerUp.h"
#include "OnScreenObject.h"

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    /* For rand() - seed the generator
     */
    srand(time(NULL));

    /* PlayerShip needs a Colour object and
     * a Vector2f object.
     */
    PlayerShip* ship = new PlayerShip();

    /* Having created the object I pass it into
     * PlayerShip
     */
    Colour* c = new Colour(255, 0, 0);
    ship->setColour(c);

    /* The alternative is to create the object
 * and pass it stright into PlayerShip
 */
    ship->setPosition(new Vector2f(1.1f, 2.2f));

    /* NOTE: I delete neither of these, the
     * PlayerShip object takes care of both
     */

    ship->collectPowerUp(new PowerUp("Health Pack"));
    ship->collectPowerUp(new PowerUp("Shield Upgrade"));
    ship->collectPowerUp(new PowerUp("Missile Launcher"));

    ship->printShipInfo();

    /* Polymorphisum demo
 */
    const int LIST_MAX = 5;
    OnScreenObject* drawList[LIST_MAX];
    drawList[0] = ship;
    drawList[1] = new PowerUp("Shield Upgrade");
    drawList[2] = new PowerUp("Health Pack");
    drawList[3] = new PowerUp("Shield Upgrade");
    drawList[4] = new PowerUp("Missile Launcher");

    cout << "Calling draw() on drawList (in order)" << endl;

    for (int i = 0; i < LIST_MAX; i++)
    {
        /* Polymorphic call - actual code
         * to be executed is decided at runtime
         * - A smart compiler could work out the
         * type and optimise this.
         */
        drawList[i]->draw();
    }

    cout << "Calling draw() on drawList (100 random indexes)" << endl;

    for (int i = 0; i < 100; i++)
    {
        /* No compiler could predict this */
        int randomIndex = rand() % 5;
        drawList[randomIndex]->draw();
    }

    cout << "Cleaning up" << endl;

    for (int i = 1; i < LIST_MAX; i++)
    {
        delete drawList[i];
    }

    delete ship;
    exit(0);
}