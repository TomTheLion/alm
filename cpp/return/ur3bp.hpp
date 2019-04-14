bool file_to_vector(string filename, vector<double> &vector);
void y_init_ur3bp(Vector3d r, Vector3d v, Vector3d rm, Vector3d vm, double y[]);
void dur3bp(double t, double y[], double yp[]);
double rp(Vector3d r, Vector3d v);
void ur3bp_w(Vector3d r, Vector3d v, Vector3d rm, Vector3d vm, double tf1, double tf2);
double ddphi(Vector3d r, Vector3d v, Vector3d dr, Vector3d dv);
double ddhs(Vector3d r, Vector3d dr);
void cr3bp_p(double rp, double &tf, double &vp);
void mrv(Vector3d &r, Vector3d &v, Vector3d &rm, Vector3d &vm, double p, double &tout);
void ur3bp_r(Vector3d &r, Vector3d &v, Vector3d &rm, Vector3d &vm, double ti, double &tf, double c, bool &cflag);